# 基于Audrino开发板的超声波测距仪的构建

[English](https://github.com/liwei3699/Ultrasonic-rangefinder-based-on-Arduino-development-board#readme)

本组实验是利用开源硬件组建超声波测距警报系统，尝试使用智能主机来控制管理传感信号并进行判断处理以完成报警功能探究智能化信息系统的工作原理与工作过程.

## 实验部件

Arduino电路板(UNO主板)

超声波模块

有源蜂鸣器

9V电池

## 电路设计

![1681532042712](https://github.com/liwei3699/Ultrasonic-rangefinder-based-on-Arduino-development-board/blob/main/%E7%94%B5%E8%B7%AF%E5%9B%BE%E8%AE%BE%E8%AE%A1.png)

## 工作原理

①电路板产生高脉冲触发超声测距模块

②电路板判断物体距电路板距离是否低于设定值35cm

③若低于，有源蜂鸣器发出蜂鸣
