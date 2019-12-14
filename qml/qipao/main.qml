import  QtQuick 2.4
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 2.0
import QtQuick.Controls.Styles 1.4
/**********************
*Author:邱于涵
*QQ:1031893464，未经作者允许 请勿转载。
*Time:2017年1月29日23:24:48
*********************/
Window{
    id:window
    BorderImage{

        source:"pao.png"
        width:label1.width+20
        border.left: 10
        border.right: 10
        border.top:10
        border.bottom:10
        Label{
            id:label1
            font.pixelSize: 12
            anchors.centerIn:parent
            anchors.leftMargin:10
            text:"这是聊天内容 哈哈哈哈"
        }
    }
    width:300
    height:500
    visible:true
    ListView{
        add: Transition {
            //设置增加Item时的动画 from 100,100  to不设置 就是默认在ListView
            NumberAnimation { properties: "x,y"; from: 100; duration: 1000 }
        }
        id:listview
        anchors.top: parent.top
        anchors.bottom: bottomrect.top
        anchors.left:parent.left
        anchors.right:parent.right
        //anchors的对象要么是兄弟结点（提供id）
        //要么就是子节点（parent）
        delegate:Component{ //这里delegate:后面必须是Component
            Rectangle{
                width:window.width
                height:label1.height+20
                // color:"black"
                BorderImage{
                    //聊天气泡
                    id:qipao
                    source:"qrc:/1.png"
                    width:label1.width+20
                    height:label1.height<=30?30:label1.height+5
                    //  width:20
                    border.left: 10
                    border.right: 10
                    border.top:10
                    border.bottom:10
                    x:parent.width-width
                    Text{
                        id:label1
                        /*************
                                             此处为可变大小的聊天气泡的重点
                                             根据获取值的长度 和每个字占的像素
                                            *************/
                        width:label1.text.length<=10?label1.text.length*12:120
                        font.pixelSize: 12
                        anchors.centerIn:parent
                        anchors.leftMargin:10
                        wrapMode: Text.Wrap //多行文本 超过width就自动换行
                        text:detail
                    }
                }
            }
        }
        model:ListModel{
            id:listmodel
            ListElement{
                detail:"你好这是内容哈哈"
            }
        }
    }
    //底部
    Rectangle{
        height: 40
        anchors.bottom: parent.bottom
        id:bottomrect
        Row{
            TextField{
                id:textfield
                placeholderText: "输入内容"
                height:bottomrect.height
                width:window.width*0.7
            }
            Button{
                text:"发送"
                height:bottomrect.height
                width:window.width*0.3
                onClicked: {
                    listmodel.append({"detail":textfield.text})
                }
            }
        }
    }
}

