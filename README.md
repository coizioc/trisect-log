# Trisecting the Log

> There is a log of precious wood 18 feet long whose bases are 5 feet and 2.5 feet in circumference.  Into what lengths should the log be cut to trisect its volume? (*Treatise on Large and Small Numbers*, Japan, 1627)

Let <img src="svgs/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode" align=middle width=7.087278pt height=14.10255pt/> and <img src="svgs/9b325b9e31e85137d1de765f43c0f8bc.svg?invert_in_darkmode" align=middle width=12.876435pt height=22.38192pt/> be the circumferences of the small and long bases of the log. Thus,

<p align="center"><img src="svgs/4c4d75b7fbb865238037c4c135091894.svg?invert_in_darkmode" align=middle width=155.711655pt height=14.55729pt/></p>

In addition, let <img src="svgs/f17481996aa6acd4c0da08a3c7b6b0ac.svg?invert_in_darkmode" align=middle width=49.39242pt height=22.38192pt/> ft. be the length of the log.

Finally, let us approximate the shape of the log as a [frustum](https://mathworld.wolfram.com/ConicalFrustum.html), whose volume <img src="svgs/8fd17895617f244460f9fc641596e4a5.svg?invert_in_darkmode" align=middle width=17.22435pt height=22.38192pt/> can be described using the following formula given the radii of the two bases <img src="svgs/89f2e0d2d24bcf44db73aab8fc03252c.svg?invert_in_darkmode" align=middle width=7.8435885pt height=14.10255pt/> and <img src="svgs/1e438235ef9ec72fc51ac5025516017c.svg?invert_in_darkmode" align=middle width=12.56145pt height=22.38192pt/>:

<p align="center"><img src="svgs/c3f15bd83591d302c558515e29daaf1a.svg?invert_in_darkmode" align=middle width=186.61005pt height=32.950665pt/></p>

In order to better accommodate the problem, we will replace the radii in the equation with their respective circumferences:

<p align="center"><img src="svgs/bd4c800ddf7592e9da9cc20e7175cd92.svg?invert_in_darkmode" align=middle width=328.8417pt height=139.12635pt/></p>

Plugging this equation in for the values of <img src="svgs/3e18a4a28fdee1744e5e3f79d13b9ff6.svg?invert_in_darkmode" align=middle width=7.087278pt height=14.10255pt/>, <img src="svgs/9b325b9e31e85137d1de765f43c0f8bc.svg?invert_in_darkmode" align=middle width=12.876435pt height=22.38192pt/>, and <img src="svgs/ddcb483302ed36a59286424aa5e0be17.svg?invert_in_darkmode" align=middle width=11.14542pt height=22.38192pt/> given in the problem, we get a volume of 21 ft<img src="svgs/b6c5b75bafc8bbc771fa716cb26245ff.svg?invert_in_darkmode" align=middle width=6.5281095pt height=26.70657pt/> for the entire log. Therefore, to trisect the volume of the log, each segment must have volume <img src="svgs/34a806455b46fab79559a53b9947934c.svg?invert_in_darkmode" align=middle width=107.646pt height=24.56553pt/> ft<img src="svgs/b6c5b75bafc8bbc771fa716cb26245ff.svg?invert_in_darkmode" align=middle width=6.5281095pt height=26.70657pt/>.

Each segment is itself a frustum. However, in this case, we do not know the values of the circumference at least one of the bases and the length of each segment <img src="svgs/2f2322dff5bde89c37bcae4116fe20a8.svg?invert_in_darkmode" align=middle width=5.2088685pt height=22.74591pt/>.

However, we can determine the length of each segment using a bit of trigonometry:

<p align="center"><img src="svgs/1a004cd058f4c525905127f66ec1baf1.svg?invert_in_darkmode" align=middle width=698.13315pt height=136.654815pt/></p>

From the diagram, we can see that the tangent of the angle between the center of the log and the trunk of the log <img src="svgs/c1099762578ac76c8080002b76e0e2bf.svg?invert_in_darkmode" align=middle width=34.627065pt height=22.74591pt/> is

<p align="center"><img src="svgs/2c99996fb88151e5265115189e809f2f.svg?invert_in_darkmode" align=middle width=29.366535pt height=33.5874pt/></p>

Using similar triangles, we can determine the length of the segment using the following formula:

<p align="center"><img src="svgs/bfa4539e8c8916cc7e47a6474b7ca4e8.svg?invert_in_darkmode" align=middle width=124.14897pt height=113.028465pt/></p>

We can now plug the value for <img src="svgs/2f2322dff5bde89c37bcae4116fe20a8.svg?invert_in_darkmode" align=middle width=5.2088685pt height=22.74591pt/> to get the circumference of the unknown base:

<p align="center"><img src="svgs/13249659c26f08ff83aa0b1323d521e0.svg?invert_in_darkmode" align=middle width=289.2186pt height=281.1006pt/></p>

In short, in order to determine the length of each segment, we start from the small base and determine the circumference of the segment's large base <img src="svgs/9b325b9e31e85137d1de765f43c0f8bc.svg?invert_in_darkmode" align=middle width=12.876435pt height=22.38192pt/> using Formula (1):

<p align="center"><img src="svgs/3dd39e0863f62654e0ba71300b17fbc8.svg?invert_in_darkmode" align=middle width=167.0823pt height=29.48121pt/></p>

We can use this value of <img src="svgs/9b325b9e31e85137d1de765f43c0f8bc.svg?invert_in_darkmode" align=middle width=12.876435pt height=22.38192pt/> to determine the segment's length using Formula (2):

<p align="center"><img src="svgs/38b2c08b76e45c477dd93284564f1290.svg?invert_in_darkmode" align=middle width=84.628995pt height=33.5874pt/></p>

For each segment <img src="svgs/9f7365802167fff585175c1750674d42.svg?invert_in_darkmode" align=middle width=12.571845pt height=14.10255pt/>, the large base of the segment <img src="svgs/db0e77b2ab4f495dea1f5c5c08588288.svg?invert_in_darkmode" align=middle width=16.338465pt height=22.38192pt/> becomes the small segment of the next segment <img src="svgs/a317d2a66b5388d07f73fcb3ef21fef8.svg?invert_in_darkmode" align=middle width=29.153685pt height=14.10255pt/>. That is to say, <img src="svgs/719bccf5de5171cdf95ed6ad8f1f2be1.svg?invert_in_darkmode" align=middle width=67.350195pt height=22.38192pt/>. With this information, we can construct a pseudocode algorithm for this procedure.

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