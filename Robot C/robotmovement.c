task main{
  //All the robot code
  setMotor(leftMotor,60);
  setMotor(rightMotor,60);
  wait(3,seconds);
  setMotor(leftMotor,-60);
  setMotor(rightMotor,-60);
  wait(3,seconds);
  //Make the robot spin around?
  setMotor(rightMotor,127);
  setMotor(leftMotor,0);
  wait(1,seconds);
}