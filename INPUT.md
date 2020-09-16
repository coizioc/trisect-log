# Trisecting the Log

> There is a log of precious wood 18 feet long whose bases are 5 feet and 2.5 feet in circumference.  Into what lengths should the log be cut to trisect its volume? (*Treatise on Large and Small Numbers*, Japan, 1627)

Let $c$ and $C$ be the circumferences of the small and long bases of the log. Thus,

$$
c=2.5\text{ ft.}, C=5.0\text{ ft.}
$$

In addition, let $L = 18$ ft. be the length of the log.

Finally, let us approximate the shape of the log as a [frustum](https://mathworld.wolfram.com/ConicalFrustum.html), whose volume $V_f$ can be described using the following formula given the radii of the two bases $r$ and $R$:

$$
V_f = \frac{1}{3}\pi L \left(r^2+rR+R^2\right)
$$

In order to better accommodate the problem, we will replace the radii in the equation with their respective circumferences:

$$
\begin{aligned}
V_f &= \frac{1}{3}\pi L \left[\left(\frac{c}{2\pi}\right)^2+\left(\frac{c}{2\pi}\right)\left(\frac{C}{2\pi}\right)+\left(\frac{C}{2\pi}\right)^2\right] \\

&= \left(\frac{1}{3}\right) \left(\frac{1}{4\pi^2}\right) (\pi L) \left(c^2+cC+C^2\right) \\

&= \frac{1}{12\pi} L \left(c^2+cC+C^2\right)
\end{aligned}
$$

Plugging this equation in for the values of $c$, $C$, and $L$ given in the problem, we get a volume of 21 ft$^3$ for the entire log. Therefore, to trisect the volume of the log, each segment must have volume $v = V_f / 3 \approx 7.0$ ft$^3$.

Each segment is itself a frustum. However, in this case, we do not know the values of the circumference at least one of the bases and the length of each segment $l$.

However, we can determine the length of each segment using a bit of trigonometry:

\begin{tikzpicture}[domain=0:5]
    % draw frustum
    \draw (0,0) -- (0,1) -- (4,2) -- (4,0) -- cycle;
    \draw[dotted] (0,1) -- (4,1);
    
    % draw theta
    \node at (1.25,1.15) {$\theta$};
    
    % draw small base
    \node at (-0.3, 0.5) {$\frac{c}{2\pi}$};
    
    % draw large base
    \node at (4.3, 1) {$\frac{C}{2\pi}$};
    \draw (4.1,0) -- (4.5,0);
    \draw (4.1,2) -- (4.5,2);
    \draw (4.3,0) -- (4.3,0.75);
    \draw (4.3,1.25) -- (4.3,2);
    
    % draw large base minus small base
    \node[right] at (4.5, 1.5) {$\frac{1}{2\pi}(C-c)$};
    \draw (4.6,1) -- (6.2,1);
    \draw (4.6,2) -- (6.2,2);
    \draw (5.4,1) -- (5.4,1.25);
    \draw (5.4,1.75) -- (5.4,2);
    
    % draw angle arc
    \path[clip] (0,1) -- (4,2) -- (4,1);
    \node[circle,draw=blue,minimum size=60pt] at (0,1) (circ) {};
\end{tikzpicture}

From the diagram, we can see that the tangent of the angle between the center of the log and the trunk of the log $\tan\theta$ is

$$
\frac{C}{4\pi L}
$$

Using similar triangles, we can determine the length of the segment using the following formula:

$$
\begin{aligned}
\tan\theta &= \frac{\frac{C}{2\pi}-\frac{c}{2\pi}}{l} \\

&= \frac{C-c}{2\pi l} \\

l &= \frac{C-c}{2\pi\tan\theta}
\end{aligned}
$$

We can now plug the value for $l$ to get the circumference of the unknown base:

$$
\begin{aligned}
v_f &= \frac{1}{12\pi}l\left(c^2+cC+C^2\right) \\

&= \left(\frac{1}{12\pi}\right)\left(\frac{C-c}{2\pi\tan\theta}\right)\left(c^2+cC+C^2\right) \\

12\pi v_f\tan\theta &= (C-c)\left(c^2+cC+C^2\right) \\

&= c^2C + cC^2 + C^3 - c^3 - c^2C - cC^2 \\

&= C^3 - c^3 \\

C^3 &= 12\pi v_f\tan\theta + c^3 \\

C &= \sqrt[3]{12\pi v_f\tan\theta + c^3}

\end{aligned}
$$

In short, in order to determine the length of each segment, we start from the small base and determine the circumference of the segment's large base $C$ using Formula (1):

$$
C = \sqrt[3]{12\pi v_f\tan\theta + c^3}
$$

We can use this value of $C$ to determine the segment's length using Formula (2):

$$
l = \frac{C-c}{2\pi\tan\theta}
$$

For each segment $v_i$, the large base of the segment $C_i$ becomes the small segment of the next segment $v_{i+1}$. That is to say, $C_i = c_{i+1}$. With this information, we can construct a pseudocode algorithm for this procedure.

```go
n := 3
small_c := 2.5
big_c := 5.0
length := 18.0

volume := frustum_vol(length, small_c, big_c)

// ls is a list of segment lengths
ls[n] := {0}
// cs is a list of segment circumferences
cs[n + 1] := {small_c, 0}

for i := range 0..n:
    ls[i] := get_length() // using formula (1)

    // cs[i] is c and cs[i + 1 ] is C.
    cs[i + 1] := get_big_c() // using formula (2)
```

This repository contains a C program that implements this code.