Face & Eye Detection — Easy C++ & OpenCV Project

Lightweight, beginner-friendly real-time face and eye detection demo using C++ and OpenCV 4. Uses Haar cascade classifiers for detection. Perfect for learning computer vision basics or showcasing your skills.​

Features

Detects faces and eyes in real time using webcam.​

Minimal dependencies (OpenCV 4, C++).​

Haar cascade classifiers for reliable detection.​

Clean code – easy for beginners to read and extend.​

Demo
<img width="1442" height="861" alt="face eye detect " src="https://github.com/user-attachments/assets/24db83e9-9d37-48a7-881f-d8eff8cd6bda" />


Getting Started

Clone this repository.

Install OpenCV 4 on your machine.

Compile the code:

text
g++ face_detect.cpp -o face_detect `pkg-config --cflags --libs opencv4`
Run the executable:

text
./face_detect
File Overview

File Name	Purpose
face_detect.cpp	Main C++ source code
haarcascade_frontalface_default.xml	Haar classifier for face detection
haarcascade_eye.xml	Haar classifier for eye detection
Customization

Feel free to modify and extend the project to detect other features, experiment with different classifiers, or process saved images and videos instead of webcam input.​

Credits

Created by Satyam Kumar Jha. References: OpenCV documentation, public Haar cascades, and community tutorials.​

GitHub: https://github.com/sa50tyam11
LinkedIn: https://www.linkedin.com/in/satyamkrjha5011

License

This project uses the MIT License. See LICENSE for details.​

Tips:

Keep headings clear and use bullet points for features and steps.​

Add a screenshot for visual clarity.​

Provide copy-paste commands for compilation and running code.​

Acknowledge sources and contributors, and include a license section.​

Optional: Add a table of contents for long READMEs.​

You can copy and paste this improved layout into your README. Adjust details (installation instructions, credits, license, etc.) to fit your project as needed.
