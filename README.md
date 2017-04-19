# Clasp — Bringing Common Lisp and C++ Together

## This is the dev-mbx branch for developing some new thread aware classes.


## NOTE:  June 22, 2016 - Build the 'testing' branch of Clasp along with the <a href="https://github.com/drmeister/externals-clasp">externals-clasp</a> - for now.

## What Is This?
Clasp is a new [Common Lisp](https://common-lisp.net/) implementation that seamlessly interoperates with C++ libraries and programs using [LLVM](http://llvm.org/) for compilation to native code. This allows Clasp to take advantage of a vast array of preexisting libraries and programs, such as out of the scientific computing ecosystem. Embedding them in a Common Lisp environment allows you to make use of rapid prototyping, incremental development, and other capabilities that make it a powerful language.

## Latest Release
The currently latest release is [Clasp 0.5](https://github.com/drmeister/clasp/releases/tag/0.5.0). [Changes](https://github.com/drmeister/clasp/milestone/3) include:

* Code cleanup, support for jumping to C++ function definitions,
* Link-Time-Optimization,
* New build system,
* CFFI

### Getting It
At the moment, Clasp is supported on Linux and Mac OS X. On these systems, you should be able to build it from source. See the [wiki entry](https://github.com/drmeister/clasp/wiki/Clasp-0.5-Build-Instructions) for instructions. In case things go wrong, the quickest way to get help is to either [file an issue](#reporting-problems), or to [chat with us directly](#irc).

Building on most systems will take around 8-12GB of memory and ~2 hours with a relatively modern processor, so be prepared to watch a movie or do some other useful work until Clasp is all done. You may also want to activate a large enough swap file if your system does not have enough DRAM.

Currently there are no binary releases available.

### Common Lisp Ecosystem Support
Clasp actively supports the following major components:

* [SLIME](https://common-lisp.net/project/slime/)
* [ASDF](https://common-lisp.net/project/asdf/)
* [Quicklisp](https://www.quicklisp.org/beta/)
* [CFFI](https://common-lisp.net/project/cffi/)

However, some major components still do not have support:

* [Bordeaux-Threads](https://github.com/drmeister/clasp/issues/163)
* [Unicode](https://github.com/drmeister/clasp/issues/164)

Post on the issues or [contact us](#irc) if you're interested in changing that.

## Contributing to Clasp
We very much welcome any kind of contribution to Clasp, even if it is just bug finding and testing. A lot can be done all around the project, if you want to dive into something large. See the [CONTRIBUTING](https://github.com/drmeister/clasp/blob/dev/CONTRIBUTING.md) file for the few guidelines we've set up around contributions.

## Reporting Problems
Generally you can report problems in two fashions, either by [opening an issue ticket](https://github.com/drmeister/clasp/issues/new) or by [chatting with us directly](#irc). In both cases, though, you should have the following pieces handy in order for us to be able to help you out as quickly and painlessly as possible:

* Your operating system name and version.
* The branches that you're using of Clasp and Externals-Clasp.
* A paste of the build log or failure point that you reached.
* Patience.

## IRC
Clasp has an IRC channel on [Freenode](https://freenode.net/) called [#clasp](irc://irc.freenode.net/#clasp). If you have questions, problems, suggestions, or generally would like to just hang out with us devs, come and stop by!

## More on Clasp
For more information on Clasp and the discussion around it, see the following sites:

* [Christian Schafmeister's blog](https://drmeister.wordpress.com)
* [Hackernews](https://hn.algolia.com/?query=clasp&sort=byPopularity&prefix&page=0&dateRange=all&type=story)
* [Reddit](https://www.reddit.com/r/lisp/search?q=clasp&restrict_sr=on)
* [Google Tech Talks](https://www.youtube.com/watch?v=8X69_42Mj-g)
* [ELS2016](https://www.youtube.com/watch?v=5bQhGS8V6dQ)

## Acknowledgments
Clasp was supported by:

* The Defense Threat Reduction Agency (DOD-DTRA) (HDTRA1-09-1-0009) 
* The National Institutes of Health (NIH/NIGMS Grant number: 2R01GM067866-07A2) 
* The National Science Foundation (Grant number: 1300231)
