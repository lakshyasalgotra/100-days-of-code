#!/usr/bin/env python3
"""
100 Days of Code - C Programming Challenge File Generator
This script generates 100 C program files (Day_01.c through Day_100.c)
Each file contains a complete C program with question, test cases, and solution template.

Usage:
  python generate_100_c_files.py

The script will create all 100 C files in the current directory.
"""

import os

# All 100 questions from the questionBank
QUESTIONS = [
    {"id": 1, "q": "Write a program to input two numbers and display their sum."},
    {"id": 2, "q": "Write a program to input two numbers and display their sum, difference, product, and quotient."},
    {"id": 3, "q": "Write a program to calculate the area and perimeter of a rectangle given its length and breadth."},
    {"id": 4, "q": "Write a program to calculate the area and circumference of a circle given its radius."},
    {"id": 5, "q": "Write a program to convert temperature from Celsius to Fahrenheit."},
    {"id": 6, "q": "Write a program to swap two numbers using a third variable."},
    {"id": 7, "q": "Write a program to swap two numbers without using a third variable."},
    {"id": 8, "q": "Write a program to find and display the sum of the first n natural numbers."},
    {"id": 9, "q": "Write a program to calculate simple and compound interest for given principal, rate, and time."},
    {"id": 10, "q": "Write a program to input time in seconds and convert it to hours:minutes:seconds format."},
    {"id": 11, "q": "Write a program to input an integer and check whether it is even or odd using if-else."},
    {"id": 12, "q": "Write a program to input an integer and check whether it is positive, negative or zero using nested if-else."},
    {"id": 13, "q": "Write a program to input a year and check whether it is a leap year or not using conditional statements."},
    {"id": 14, "q": "Write a program to input a character and check whether it is a vowel or consonant using if-else."},
    {"id": 15, "q": "Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character."},
    {"id": 16, "q": "Write a program to input three numbers and find the largest among them using if-else."},
    {"id": 17, "q": "Write a program to find the roots of a quadratic equation and categorize them."},
    {"id": 18, "q": "Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 90-100: Grade A, 80-89: Grade B, 70-79: Grade C, 60-69: Grade D, <60: Grade F."},
    {"id": 19, "q": "Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths."},
    {"id": 20, "q": "Write a program to display the day of the week based on a number (1-7) using switch-case."},
]
    {"id": 21, "q": "Write a program to display the month name and number of days using switch-case for a given month number."},
    {"id": 22, "q": "Write a program to find profit or loss percentage given cost price and selling price."},
    {"id": 23, "q": "Write a program to calculate library fine based on late days."},
    {"id": 24, "q": "Write a program to calculate electricity bill based on units consumed."},
    {"id": 25, "q": "Write a program to implement a basic calculator using switch-case for +, -, *, /."},
    {"id": 26, "q": "Write a program to print numbers from 1 to n."},
    {"id": 27, "q": "Write a program to print the sum of the first n odd numbers."},
    {"id": 28, "q": "Write a program to print the product of even numbers from 1 to n."},
    {"id": 29, "q": "Write a program to calculate the factorial of a number."},
    {"id": 30, "q": "Write a program to reverse a given number."},
    {"id": 31, "q": "Write a program to take a number as input and print its equivalent binary representation."},
    {"id": 32, "q": "Write a program to check if a number is a palindrome."},
    {"id": 33, "q": "Write a program to check if a number is an Armstrong number."},
    {"id": 34, "q": "Write a program to check if a number is prime."},
    {"id": 35, "q": "Write a program to print all factors of a given number."},
    {"id": 36, "q": "Write a program to find the HCF (GCD) of two numbers."},
    {"id": 37, "q": "Write a program to find the LCM of two numbers."},
    {"id": 38, "q": "Write a program to find the sum of digits of a number."},
    {"id": 39, "q": "Write a program to find the product of odd digits of a number."},
    {"id": 40, "q": "Write a program to find the 1s complement of a binary number and print it."},
    {"id": 41, "q": "Write a program to swap the first and last digit of a number."},
    {"id": 42, "q": "Write a program to check if a number is a perfect number."},
    {"id": 43, "q": "Write a program to check if a number is a strong number."},
    {"id": 44, "q": "Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 ... up to n terms."},
    {"id": 45, "q": "Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 ... up to n terms."},
    {"id": 46, "q": "Write a program to print a specific pattern."},
    {"id": 47, "q": "Write a program to print a specific pattern."},
    {"id": 48, "q": "Write a program to print the pattern: 1 1 2 1 2 3 1 2 3 4 1 2 3 4 5."},
    {"id": 49, "q": "Write a program to print the pattern: 5 4 5 3 4 5 2 3 4 5 1 2 3 4 5."},
    {"id": 50, "q": "Write a program to print a pyramid pattern."},
]
# Questions 51-100 continued...
QUESTIONS.extend([
    {"id": 51, "q": "Write a program to print a specific pattern with numbers."},
    {"id": 52, "q": "Write a program to print a pattern with stars."},
    {"id": 53, "q": "Write a program to print a specific star pattern."},
    {"id": 54, "q": "Write a program to print a layered star pattern."},
    {"id": 55, "q": "Write a program to print all the prime numbers from 1 to n."},
    {"id": 56, "q": "Read and print elements of a one-dimensional array."},
    {"id": 57, "q": "Find the sum of array elements."},
    {"id": 58, "q": "Find the maximum and minimum element in an array."},
    {"id": 59, "q": "Count even and odd numbers in an array."},
    {"id": 60, "q": "Count positive, negative, and zero elements in an array."},
    {"id": 61, "q": "Search for an element in an array using linear search."},
    {"id": 62, "q": "Reverse an array without taking extra space."},
    {"id": 63, "q": "Merge two arrays."},
    {"id": 64, "q": "Find the digit that occurs the most times in an integer number."},
    {"id": 65, "q": "Search in a sorted array using binary search."},
    {"id": 66, "q": "Insert an element in a sorted array at the appropriate position."},
    {"id": 67, "q": "Insert an element in an array at a given position."},
    {"id": 68, "q": "Delete an element from an array."},
    {"id": 69, "q": "Find the second largest element in an array."},
    {"id": 70, "q": "Rotate an array to the right by k positions."},
    {"id": 71, "q": "Read and print a matrix."},
    {"id": 72, "q": "Find the sum of all elements in a matrix."},
    {"id": 73, "q": "Find the sum of each row of a matrix and store it in an array."},
    {"id": 74, "q": "Find the transpose of a matrix."},
    {"id": 75, "q": "Add two matrices."},
    {"id": 76, "q": "Check if a matrix is symmetric."},
    {"id": 77, "q": "Check if the elements on the diagonal of a matrix are distinct."},
    {"id": 78, "q": "Find the sum of main diagonal elements for a square matrix."},
    {"id": 79, "q": "Perform diagonal traversal of a matrix."},
    {"id": 80, "q": "Multiply two matrices."},
    {"id": 81, "q": "Count characters in a string without using built-in length functions."},
    {"id": 82, "q": "Print each character of a string on a new line."},
    {"id": 83, "q": "Count vowels and consonants in a string."},
    {"id": 84, "q": "Convert a lowercase string to uppercase without using built-in functions."},
    {"id": 85, "q": "Reverse a string."},
    {"id": 86, "q": "Check if a string is a palindrome."},
    {"id": 87, "q": "Count spaces, digits, and special characters in a string."},
    {"id": 88, "q": "Replace spaces with hyphens in a string."},
    {"id": 89, "q": "Count frequency of a given character in a string."},
    {"id": 90, "q": "Toggle case of each character in a string."},
    {"id": 91, "q": "Remove all vowels from a string."},
    {"id": 92, "q": "Find the first repeating lowercase alphabet in a string."},
    {"id": 93, "q": "Check if two strings are anagrams of each other."},
    {"id": 94, "q": "Find the longest word in a sentence."},
    {"id": 95, "q": "Check if one string is a rotation of another."},
    {"id": 96, "q": "Reverse each word in a sentence without changing the word order."},
    {"id": 97, "q": "Print the initials of a name."},
    {"id": 98, "q": "Print initials of a name with the surname displayed in full."},
    {"id": 99, "q": "Change the date format from dd/mm/yyyy to dd-Mon-yyyy."},
    {"id": 100, "q": "Print all sub-strings of a string."},
])

# C file template generator
def generate_c_file(question_id, question_text):
    """Generate a complete C file with question and template."""
    filename = f"Day_{question_id:02d}.c"
    
    c_code = f"""/*
 * Day {question_id}: 100 Days of Code Challenge
 * 
 * Question:
 * {question_text}
 * 
 * Author: Your Name
 * Date: {import_date()}
 * 
 * Instructions:
 * 1. Read the question carefully
 * 2. Write your solution in the main() function below
 * 3. Compile: gcc Day_{question_id:02d}.c -o Day_{question_id:02d}
 * 4. Run: ./Day_{question_id:02d}
 * 
 * Tips:
 * - Test with different inputs
 * - Handle edge cases
 * - Add comments to explain your logic
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main() {{
    // TODO: Write your solution here
    
    printf("Day {question_id}: {question_text}\\n\\n");
    
    // Your code starts here
    
    
    
    // Your code ends here
    
    return 0;
}}
"""
    return filename, c_code

def import_date():
    from datetime import datetime
    return datetime.now().strftime("%Y-%m-%d")

# Main execution
if __name__ == "__main__":
    print("=" * 60)
    print("100 Days of Code - C File Generator")
    print("=" * 60)
    print(f"Generating {len(QUESTIONS)} C program files...\n")
    
    files_created = 0
    
    for question in QUESTIONS:
        filename, code = generate_c_file(question['id'], question['q'])
        
        try:
            with open(filename, 'w') as f:
                f.write(code)
            print(f"✓ Created: {filename}")
            files_created += 1
        except Exception as e:
            print(f"✗ Error creating {filename}: {e}")
    
    print(f"\n{'='*60}")
    print(f"Success! Created {files_created}/{len(QUESTIONS)} files")
    print(f"{'='*60}")
    print("\nTo compile and run a file:")
    print("  gcc Day_01.c -o Day_01")
    print("  ./Day_01")
    print("\nHappy coding! 🚀")
