# 20009101330

# digitalRead()
```base
Description
Reads the value from a specified digital pin, either HIGH or LOW.

Syntax
digitalRead(pin)

Parameters
pin: the Arduino pin number you want to read

Returns
HIGH or LOW
```
参考文献 &#62;语言 &#62;功能 &#62;数字io &#62;数字写入
数字写入（）
[数字输入/输出]
说明
写一个HIGH或者低数字管脚的值

如果该引脚已配置为OUTPUT具有 pinMode（），其电压将设置为相应的值：5V（或3.3V板上为3.3V）HIGH0伏（接地）低 .

如果管脚配置为INPUT , 数字写入（）将启用(HIGH)或禁用(低)输入引脚上的内部上拉。建议设置pinMode()到 输入_上拉启用内部上拉电阻器。见数字引脚教程了解更多信息

如果不设置pinMode()到输出，并在呼叫时将LED连接到插脚digitalWrite(HIGH)，指示灯可能会变暗。没有显式设置 pinMode（） ,digitalWrite()将启用内部上拉电阻器，其作用类似于一个大型限流电阻器。

语法
digitalWrite(pin, value)

参数
pin：Arduino针脚编号。
value :高或LOW .

退换商品
没有什么

示例代码
该代码使数字引脚13成为OUTPUT通过在高和LOW以一秒钟的速度

void setup() {
  pinMode(13, OUTPUT);    // sets the digital pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // sets the digital pin 13 on
  delay(1000);            // waits for a second
  digitalWrite(13, LOW);  // sets the digital pin 13 off
  delay(1000);            // waits for a second
}
注意事项和警告
模拟输入管脚可以用作数字管脚，称为A0、A1等。但Arduino Nano、Pro Mini和Mini的A6和A7管脚除外，它们只能用作模拟输入。
