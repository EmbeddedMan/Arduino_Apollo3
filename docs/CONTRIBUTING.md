What to Contribute
==================
Goals of this Arduino core, listed in order of priority, are:
1. Coverage of the Arduino built-in functions demonstrated by Sketch compatibility.
1. Creation of a well-structured and easy to extend Arduino core.
1. Efficient use of existing AmbiqSuite HAL code.
1. Backward-compatible improvements to the standard Arduino libraries.

If you find a standard Arduino capability that is not working then that is a great candidate for a contribution.

Where to Contribute
===================
In keeping with the goal of creating a well-structured, easy to understand, and easy to extend Arduino core it is importatnt to carefully consider where new code should be located. 

There are two main places where you might add code:
1. The core ```Arduino_Apollo3\cores\arduino```
2. Variants ```Arduino_Apollo3\variants```

Code that goes in the core should be applicable to *any* Apollo3-based board as opposed to code that is specific to a particular variant.

Within the core the majority of work will take place under the Arduino Support folder ```Arduino_Apollo3\cores\arduino\ard_sup```.

How to Contribute
=================

First, get an idea of whether or not your efforts will be worthwhile - you don't want to write a lot of code just to be told that the work doesn't fit the goals of the repo. There are two good places to discuss possible additions:

* [GitHub Issues](https://github.com/sparkfun/Arduino_Apollo3/issues): Follow the guidelines for submitting an issue, then discussion of viability and best approach can ensue. 
* [SparkFun Apollo3 Arduino Core Development Forum](): 



When you start to write code keep in mind the presentation of these changes. We accept changes using Github pull requests, as the most seamless way for both ourselves and contributors. When making commits for a change please use descriptive commit summaries. For considerable changes we expect a detailed yet formal and concise description of the change in the commit message. If you make 2 or more considerable changes, they should go in separate commits. The same applies to unrelated changes - for example, don't put formatting changes and actual code changes in one commit. Follow the [Code Conventions](https://github.com/sparkfun/Arduino_Apollo3/blob/master/docs/CODECONVENTIONS.md)

In your first accepted Pull Request it is up to you to add your name to the [Acknowledgements](https://github.com/sparkfun/Arduino_Apollo3/blob/master/docs/ACKNOWLEDGEMENTS.md) file. Please do this in its own individual commit. If you are contributing for a second, third, or nth time there is no need to add any more to the acknowledgements file - your contributions are recorded by your commit messages.

When you submit a pull request, please make sure that it's understood why you propose this change: what problem it addresses, how it improves the work and at the same time does not degrade it with respect to the priorities in the **What to Contribute** section. Good, detailed commit messages are an easy way to achieve this, and yet sometimes it's better to put informal points, colloquial arguments and big examples in comments to a pull request instead, to keep commit messages concise and focused.
