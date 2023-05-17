# jiggler
This is a mouse jiggler. Actually, two mouse jigglers.

It uses a [teensy microcontroller](https://www.pjrc.com/store/teensy40.html), so you can use this on computers that don't allow you to install applications and still get your mouse jiggling. If you're like me and you don't trust those random $7 amazon hardware jigglers, but also want to be less conspicuous than a giant brick under your mouse, give this a shot.

## software
Here you can find the [installation instructions](https://www.pjrc.com/teensy/td_download.html) for all of the teensy stuff you need to get started.

### discreet jiggler
This discreet jiggler jiggles the mouse every 30 seconds by default moving it 10 times back and forth one pixel from wherever the mouse is located. You can plug it in, let it run and you'll never notice it. Type, use the mouse, it all just works. You just need a teensy and a usb cable.

### complex jiggler
This complex jiggler jiggles the mouse every 30 seconds by default but it has the ability to randomize ([PRNG](https://en.wikipedia.org/wiki/Pseudorandom_number_generator)) the movements of the mouse a bit. The jiggle itself is pretty visible most of the time and may move enough to throw off a click by about the width of a single character. I just wrote it so you don't have to.

## hardware
### my hardware
- I run this on a [Teensy 3.X](https://www.pjrc.com/store/teensy32.html)
- I plug it in, it works. Mac/PC/etc - the computer thinks it's a mouse/keyboard

### other hardware
- you can probably run this just the same on a [Teensy 4.0](https://www.pjrc.com/store/teensy40.html)
- you'll need a [USB cable](https://www.amazon.com/AmazonBasics-Male-Micro-Cable-Black/dp/B07232M876/) as well

## faq
1. why did you write this?
   > so you wouldn't have to.
2. no but for real, why?
   > working on two laptops, contractor laptop logged me out every few minutes - couldn't be bothered to touch the trackpad or hit shift every minute - got tired of logging in again and again and again and again and again and again and again it was infuriating logging in 30+ times per day.
3. will this work on my computer?
   > yea, probably.
