# algo
Theory of Algorithms

This repo is for assignments in Theory of Algorithms.

# Kattis complexity assignment (9/5/18):

In the case where N is the number of test cases, I believe the solution to the Beekeeper problem is O(N). Even in the case that N is the number of words in each test case, I believe that the solution is still O(N).

In each scenario, you are only operating on each individual of N a single time, meaning the number of operations is some constant C multiplied by the number of items, or N. 

You can find my solution to the Beekeeper problem in the Kattis folder in this repo.

# Random number generator assignment (11/12/18):

I created a random number generator tool that mimics the hardware implementation of random number generation that you spoke about in class. After fooling with the limits for awhile, I came up with something that at least has a uniform distribution of digits in it's output. As for patterns that may be generated, I am unsure how to easily test for this. I did have to make the instance of 0 a small bit less likely than non-zero in order to create a more uniform distribution (it was originally outputting more zeros than any other digit, because of the structure of my loop). 

The algorithm only outputs when two somewhat randomly seeded sin waves converge to certain values. The output technically produces numbers in the range 0-15, but doesn't accept any numbers greater than 9. 

I included a small test file making it easier to check out the distribution of output.
