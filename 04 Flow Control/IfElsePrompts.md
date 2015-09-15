#If in Grl Developers... write code!
...Else, you should write code anyway.
###Instructions
Create a file called [INSERTDATE] [Your name] IfElse.cpp. (For example, if I made a file it would be called '20150913 Jas IfElse.cpp') Within that file, code all of the following assignments and number each one with comments. Print everything on a different line unless stated otherwise.
Example:
```cpp
int main()
{
	// problem 1
    what;
    // problem 2
    dothething;
    ...
}
```
###Useful information for flow control
- `if(thing is true)`: checks whether or not stuff in the parentheses is true
- `else`: stuff that follows this happens when the `if` condition isn't met
- `else if`: just like else, but can check for another condition

| Symbol | Meaning 				   | Example       | If `x = 10`...|
|--------|-------------------------|---------------|---------------|
|>		 | greater than 		   | (x > 10)      |`false`        |
|<		 | less than    		   | (x < 20)	   |`true`         |
|>=      | greater than or equal to| (x >= 5)      |`true`         |
|<=      | less than or equal to   | (x <= 10)     |`true          |
|&&      | and                     |(x< 20 && x>=9)|`true`         |
|&#124;&#124;      | or            |(x>90 &#124;&#124; x<=10)|`true`      |
|==      | checks if equal to      | (x == 70)     |`false`        |
|!=      | not equal to            | (x != 11)     |`true`         |

- - -
1. You will create a quiz for the user. For each question answered correctly, they will receive a point. At the end of the quiz, tell the user how many points they earned. Use the following template for the quiz questions:
	- A math problem (use at least 3 different operations)
	- Year of an important event--you choose which! My birthday is in 1998. Feel free to flatter me. ;)
	- Make them guess the name of a famous person (or quote or something else) given hints. (Example Question: Finish the quote "How can _____ be real if our _____ aren't real? Answer: mirrors eyes)
	- Guesstimate the age of a famous person. The user doesn't have to be correct--allow for answers within 5 years of their actual age.
	- Ask another question of your choice involving strings.

2. Create a function called getLicense.
	- If the user is 16 to 60, they can take the test. If they are under 16, tell them they're too young. If they're above 60, tell them they're too old.
	- If they can take the test, ask them 3 true or false questions about driving. Give them one point for each right answer.
	- If they have a score of 3, tell them that they are getting their license. If they have a score of 2, tell them that they are close. If they have a score of 1 or lower, tell them to go home and study.