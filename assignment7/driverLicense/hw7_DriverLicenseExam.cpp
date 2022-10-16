/*****************************************************
Student name: Regina Gil, Yezhi Wu
Student ID: w1468676 , w1761432
Course #: CISP360
Section #: 16659
Instruction mode: Online
*****************************************************
Assignment #7 -  Driver License Exam
Source file name: hw7_DriverLicenseExam.cpp
Program description: A program that rades the written
portion of the driver’s license exam. The exam has 20
multiple choice questions.
*****************************************************/
#include <cctype>
#include <iostream>

using namespace std;

int main() {
  // Correct answers
  const char ANSWERS[] = {'a', 'd', 'b', 'b', 'c', 'b', 'a', 'b', 'c', 'd',
                          'a', 'c', 'd', 'b', 'd', 'c', 'c', 'a', 'd', 'b'};
  // Size of answers
  const char ANSWERSIZE = sizeof(ANSWERS) / sizeof(char);

  // Studnet answers
  char studentsAnswers[ANSWERSIZE];
  // Incorrect answers
  int incorrectAnswers[ANSWERSIZE];
  // Size of incorrect answers
  int incorrectSize = 0;

  cout << "Please inter the student's answers for each of the question."
       << endl;
  cout << "Press enter after typing each answer." << endl;
  cout << "Please enter only an A, B, C, or D for each question." << endl;
  for (size_t i = 0; i < ANSWERSIZE; i++) {
    do {
      cout << "Question " << i + 1 << ": ";
      cin >> studentsAnswers[i];
      studentsAnswers[i] = tolower(studentsAnswers[i]); // to lower. A to a
      if (studentsAnswers[i] >= 'a' && studentsAnswers[i] <= 'd') { // ASCII
        break; // end inputer
      }
      cout << "Please enter only an A, B, C, or D for each question." << endl;
    } while (1); // end on statement of break;
    if (studentsAnswers[i] != ANSWERS[i]) {
      incorrectAnswers[incorrectSize++] = i; // incorrect answers
    }
  } // end loop
  if (incorrectSize <= 5) {
    cout << "\n\nThe student passed the exam." << endl;
  } else {
    cout << "\n\nThe student didn't pass the exam." << endl;
  }
  cout << "\nCorrect Ansers:" << ANSWERSIZE + 1 - incorrectSize << endl;

  if (incorrectSize > 0) { // any incorrect answer
    cout << "Incorrect Answers:" << incorrectSize << endl;
    cout << "\nQuestions that were answered incorrectly:" << endl;

    // output incorrect answers
    for (size_t i = 0; i < incorrectSize; i++) {
      cout << "Question " << incorrectAnswers[i] + 1 << endl;
    }
  }
}
