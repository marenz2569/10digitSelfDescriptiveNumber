# 10 Digit Self Descriptive Number
James Grime did a [math puzzle](https://www.youtube.com/watch?v=K6Qc4oK_HqY) on YouTube.

His description to it is: `I have a ten digit number. The first digit tells me how many zeros are in the number. The second digit tells me how many ones are in the number. The third digit tells me how many twos are in the number, and so on until the tenth digit which tells me how many nines are in the number. What is my number?`

This is my approach to it. This project contains a C++ File with the programm which checks numbers from `10^9+9 (1000000009)` to `9*10^9+10^8 (9100000000)` if it is one of those numbers. The valid numbers are save in a file called `tdn` or further down this file.

## Methods
- 0 may not be in the first digit, because this would say that no 0 is in the number, but this would not be the case, as a 0 at the first digit is in the number. Therefore the smallest candidate number is `10^9 (1000000000)`.
- The digit sum must be 10, because it describes how many digit there are in the number. Therefore the smallest candidate is `10^9+9 (1000000009)` and the biggest candidate is `9*10^9+10^8 (9100000000)`.

## Additions
If you have more methods to further decrease the spectrum of numbers, please open a Issue or implement the method yourself and do a pull request.
