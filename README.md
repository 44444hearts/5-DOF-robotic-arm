# 5-DOF-robotic-arm
## Gestures
This robotic arm has 5 degrees of freedom (DOF) controlled by 5 motors: the base motor, shoulder motor, elbow motor, wrist motor, and gripper motor. These 5 motors correspond to the 5 gesture controls implemented with the computer vision framework MediaPipe:
1. Move hand left/right -> Move base anticlockwise/clockwise
2. Move hand up/down -> Move shoulder up/down
3. Open/close palm -> Move elbow up/down
4. Rotate wrist 180° -> Rotate robotic wrist 90°
5. Open/close thumb and pinky -> Open/close gripper

## Design
Before 3D printing, we made our prototype using acrylic laser cutting.  

**Gripper**  
We had to iterate on the gripper due to many challenges with its grip (i.e. not being able to pick up objects) and its smooth open-and-close motion when controlled by the servo motor. The following are our initial and final acrylic designs respectively:
<img src="https://github.com/user-attachments/assets/5c9e6ae8-4e92-48f2-a116-33eb5212ab0d" width="800"/>
<img src="https://github.com/user-attachments/assets/f5a5043f-7ab8-479e-9c5a-f792c24b7940" width="800"/>

**Arm**  
Structural integrity was the main problem as the acrylics were not firm and strong enough to hold the arm upright. This would be later resolved by our 3D design as it was more stable using PLA. The following are our 2D and 3D arm designs:
<img src="https://github.com/user-attachments/assets/3ecf8607-17a2-4cca-97bd-714b29318527" width="800"/>
<img src="https://github.com/user-attachments/assets/e7978b9a-33fe-447b-98b0-2de97a789871" width="800"/>
<img src="https://github.com/user-attachments/assets/a44d0d14-182e-4254-92ca-f47fa5ef1efd" width="800"/>


This is our final design :)
<img src="https://github.com/user-attachments/assets/4cf7a6bf-d4f3-4fe9-8fe6-f219c55e3820" width="800"/>

## Presentation & Demo
[Google Slides](https://docs.google.com/presentation/d/1y2ku2sdPWo4UR9WPTGeSHaGHNblJhp-HuTntUUB2CP0/edit?usp=sharing)  
[Demo](https://drive.google.com/file/d/1TxiU-1tjvNFhZ74PIxLC11Pbq8uhhEvM/view?usp=sharing)

## To-do
- [ ] Train a model to learn more varied gestures ([MediaPipe](https://ai.google.dev/edge/mediapipe/solutions/customization/gesture_recognizer))
