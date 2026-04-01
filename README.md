# robotic-arm
## Gestures
This robotic arm has 5 degrees-of-freedom (DOF) controlled by 5 different motors, namely the base motor, shoulder motor, elbow motor, wrist motor and gripper motor.
- Move hand left/right -> Move base anticlockwise/clockwise
- Move hand up/down -> Move shoulder up/down
- Open/close palm -> Move elbow up/down
- Rotate wrist 180° -> Rotate robotic wrist 90°
- Open/close thumb and pinky -> Open/close gripper

## Presentation & Demo
[Google Slides](https://docs.google.com/presentation/d/1y2ku2sdPWo4UR9WPTGeSHaGHNblJhp-HuTntUUB2CP0/edit?usp=sharing)

## Design
Before 3D printing, we made our prototype using acrylic laser cutting.  

**Claw**  
We had to iterate the claw due to many challenges with its grip (i.e. not being able to pick up objects) and its smooth open-and-close motion when controlled by the servo motor. The following are our initial and final acrylic designs respectively:
<img width="1710" height="962" src="https://github.com/user-attachments/assets/7a0da914-73fe-43fb-977d-afe7b049186c" />
<img width="1710" height="962" src="https://github.com/user-attachments/assets/fab265d8-750e-4d8e-8e4b-26a2295d1b36" />

**Arm**  
Structural integrity was the main problem as the acrylics were not firm and strong enough to hold the arm upright. This would be later resolved by our 3D design as it was more stable using PLA.  
<img width="1710" height="962" src="https://github.com/user-attachments/assets/ba166eb3-d9e7-4f5b-8def-128c0e3feeed" />
<img width="1710" height="962" src="https://github.com/user-attachments/assets/c24f978f-5e0d-456f-9f4a-ba780292fdd9" />
<img width="1710" height="962" src="https://github.com/user-attachments/assets/769ff958-d8a0-491d-911f-a8179bb52f9e" />


This is our final design :)
<img width="1710" height="962" src="https://github.com/user-attachments/assets/e5735f17-6eab-4e92-8bcd-e78e4717e1f9" />

## To-do
- [ ] Train a model to learn more varied gestures ([MediaPipe](https://ai.google.dev/edge/mediapipe/solutions/customization/gesture_recognizer))
