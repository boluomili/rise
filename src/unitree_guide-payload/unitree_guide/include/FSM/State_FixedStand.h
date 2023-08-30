/**********************************************************************
 Copyright (c) 2020-2023, Unitree Robotics.Co.Ltd. All rights reserved.
***********************************************************************/
#ifndef FIXEDSTAND_H
#define FIXEDSTAND_H

#include "FSM/FSMState.h"

class State_FixedStand : public FSMState{
public:
    State_FixedStand(CtrlComponents *ctrlComp);
    ~State_FixedStand(){}
    void enter();
    void run();
    void exit();
    FSMStateName checkChange();

private:
    float _targetPos[12] = {0.0, 0.67, -1.3, 0.0, 0.67, -1.3, 
                            0.0, 0.67, -1.3, 0.0, 0.67, -1.3};//固定站立时期望关节角
    float _startPos[12];
    float _duration = 1000;   //步长
    float _percent = 0;       //运行百分比
};

#endif  // FIXEDSTAND_H