#include "/opt/homebrew/include/opencv4/opencv2/opencv.hpp"


#include <iostream>
using namespace cv;
using namespace std;

int main() {
    // Load the face cascade
    CascadeClassifier face_cascade, eyes_cascade;
    if (!face_cascade.load("haarcascade_frontalface_default.xml")) {
        cout << "❌ Error loading face cascade file!" << endl;
        return -1;
    }
    if (!eyes_cascade.load("haarcascade_eye.xml")) {
        cout << "❌ Error loading eye cascade file!" << endl;
        return -1;
    }

    // Open webcam
    VideoCapture cap(0);
    if (!cap.isOpened()) {
        cout << "❌ Error: Cannot open webcam!" << endl;
        return -1;
    }

    Mat frame, gray;
    vector<Rect> faces;

    cout << "✅ Press 'q' to quit." << endl;

    while (true) {
        cap >> frame;
        if (frame.empty()) break;

        cvtColor(frame, gray, COLOR_BGR2GRAY);
        equalizeHist(gray, gray);

        // Detect faces
        face_cascade.detectMultiScale(gray, faces, 1.1, 3, 0, Size(100, 100));

        for (size_t i = 0; i < faces.size(); i++) {
            Point center(faces[i].x + faces[i].width/2, faces[i].y + faces[i].height/2);
            rectangle(frame, faces[i], Scalar(0, 255, 0), 2);

            // ---- EYE DETECTION inside each face ----
            Mat faceROI = gray(faces[i]);
            vector<Rect> eyes;
            eyes_cascade.detectMultiScale(faceROI, eyes, 1.1, 2, 0, Size(30, 30));

            for (size_t j = 0; j < eyes.size(); j++) {
                Rect eye = eyes[j];
                Point eye_center(faces[i].x + eye.x + eye.width/2,
                                 faces[i].y + eye.y + eye.height/2);
                int radius = cvRound((eye.width + eye.height)*0.25);
                circle(frame, eye_center, radius, Scalar(255, 0, 0), 2);
            }
        }

        imshow("Face + Eye Detection", frame);

        if (waitKey(10) == 'q') break;
    }

    cap.release();
    destroyAllWindows();
    return 0;
}
