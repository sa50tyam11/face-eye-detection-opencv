Face & Eye Detection — Satyam Kumar Jha
Real-time face and eye detection using C++ and OpenCV 4.
Clean, minimal, and perfect for learning computer vision or showcasing your skills.
Features
Detects faces and eyes in real-time from your webcam.
Lightweight, beginner-friendly C++ project.
Uses Haar cascade classifiers for detection.
Dem
<img width="1442" height="861" alt="Screenshot 2025-11-01 at 11 49 32" src="https://github.com/user-attachments/assets/23a66483-2b37-4835-a1de-17080a1c738a" />

Installation
Clone the repository:
git clone https://github.com/sa50tyam11/face-detection.git
cd face-detection
Install OpenCV 4 (C++):
Mac (Homebrew):
brew install opencv
Ubuntu/Debian:
sudo apt-get install libopencv-dev
Compile the project:
mkdir build
cd build
cmake ..
make
Usage
Run the program:
./FaceEyeDetection
Webcam window titled "Face & Eye Detection — Satyam Kumar Jha" will open.
Press q to quit.
File Structure
face-detection/
├── main.cpp                       # C++ code for face & eye detection
├── haarcascade_frontalface_default.xml
├── haarcascade_eye.xml
└── README.md
How It Works
Loads Haar cascade classifiers for face and eye detection.
Captures frames from your webcam.
Converts frames to grayscale for efficient detection.
Detects faces first, then eyes inside detected faces.
Highlights faces and eyes with rectangles in real-time.
Requirements
C++ compiler (g++, clang++, or MSVC)
OpenCV 4.x
Author
Satyam Kumar Jha
. GitHub: https://github.com/sa50tyam11
. LinkedIn: https://www.linkedin.com/in/satyamkrjha5011
