//定义部分
#define TrigPin 2 //定义触发超声波模块的引脚TrigPin
#define EchoPin 3 //定义接受返回信号电平值的引脚EchoPin
#define Buzzer 5; //定义驱动有源蜂鸣器的引脚Buzzer
float value_cm //定义浮点型变量存储计算的距离值
//初始化部分
void setup()
{
    Serial.begin(9600); //开启串行通信接口，并设置通信波特率为9600
    pinMode(TrigPin,OUTPUT); //设置TrigPin引脚为数字输出模式
    pinMode(EchoPin,INPUT); //设置EchoPin引脚为数字输入模式
    pinMode(Buzzer,OUTPUT); //设置Buzzer引脚为数字输出模式
    digitalWrite(Buzzer,LOW); //设置有源蜂鸣器初始状态为不响的状态
}
//主函数部分
void loop()
{
    //调用自定义函数distance()，测得障碍物与超声波模块的距离
    distance();
    //调用自定义函数stu(),判断障碍物距离超声波模块的值是否小于设定值
    stu();
}
//自定义函数 distance()
void distance()
{
    //产生一个10微秒的高脉冲触发TripPin引脚，发射超声波
    digitalWrite(TrigPin,LOW); //设定TrigPin引脚为低电平
    delayMicroseconds(2); //等待2微秒
    digitalWrite(TrigPin,HIGH); //设定TrigPin引脚为高电平
    delayMicroseconds(10); //等待10微秒
    digitalWrite(TrigPin,LOW); //设定TrigPin引脚为低电平
    value_cm=float(pulseIn(EchoPin,HIGH)*17)/1000; //计算距离
    Serial.print(value_cm); //串口输出距离值
    Serial.print("cm"); //向串口输出距离值的单位
    delay(100); //等待100毫秒
}
//自定义函数stu()
void stu()
{
    if (value_cm<=35) //value_cm小于或等于设定值35cm时
    {
        digitalWrite(Buzzer,HIGH); //给有源蜂鸣器的引脚高电平,有源蜂鸣器鸣叫
        delay(30); //鸣叫声延迟30毫秒
        digitalWrite(Buzzer,LOW); //给有源蜂鸣器的引脚低电平，有源蜂鸣器停止鸣叫
    }
    else //当value_cm大于设定值35cm十
    {
        digitalWrite(Buzzer,LOW); //口有源蜂鸣器的引脚低电平，有源蜂鸣器不发出鸣叫
    }
}