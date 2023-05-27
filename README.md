# Reverse

# Introduction
This repository contains a series of programs demonstrating examples of reverse engineering in C. The goal is to understand how we can alter the flow of these programs by modifying the source code, a practice common in software cracking or patching. Please note that these examples are meant for educational purposes only, and should not be used for illegal activities.

# Program Descriptions
Each program in this repository expects the user to input a specific key. If the correct key is entered, the program will print "Good job.", otherwise it will print "Nope." and terminate the program.

The programs are structured such that the correct key is hidden and encoded in some way. The user is supposed to reverse engineer the program in order to find the correct key.

We've also provided patches for each program which alters the control flow to allow any user input to be treated as the correct key. These patches are meant to serve as examples of how one might go about modifying a program for reverse engineering purposes.

# The Patching Process
The patching process involves identifying the part of the program where the user input is compared with the correct key, and then modifying it such that the comparison always evaluates to true regardless of the user input.

Here's a step-by-step breakdown of the process:

Identify where the correct key is stored or how it's generated.
Find the section of the code where the user input is compared with the correct key.
Modify the code such that this comparison always evaluates to true.
In some programs, the patch directly modifies the user input to the correct key immediately after it's received. This effectively bypasses all checks and always prints "Good job."

# Understanding the Code
The code has been commented extensively to help understand what each section does. Feel free to experiment with different keys and see how the program behaves.

# Warning
Please remember that the techniques demonstrated here could present serious security issues if applied to real-world applications. This is meant for learning and understanding the basic principles of reverse engineering and should only be used for ethical and educational purposes. Always respect copyrights and only reverse engineer software with explicit permission from the owner.

# Future Work
In the future, we aim to provide more complex examples and delve into different reverse engineering techniques, such as static and dynamic analysis, debugging, disassembly, etc. Stay tuned!
