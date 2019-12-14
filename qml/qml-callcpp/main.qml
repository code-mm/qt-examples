import QtQuick 2.12
import QtQuick.Controls 2.0
import QtQuick.Window 2.12

//import Cpp 1.0

//import Cpp1 1.0


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    //    property string text: button.text



    //    Button{
    //        id:button

    //        text: "按钮"

    //        onClicked:{

    //            // 发送信号
    //            cpp.signalsMsg("Helo")
    //        }

    //    }

    //    Cpp{
    //        id:cpp
    //        // 连接槽函数
    //        onSignalsMsg:slotsMsg(msg)

    //    }

    //    Cpp1{
    //        id:cpp1
    //        onSignalsMsg: slotsMsg(msg)

    //    }
    //    Button{
    //        text: "发送信号"
    //        onClicked: {
    //            cpp1.signalsMsg("Hello ")
    //        }
    //    }
    property string val
    Button{
        text: "发送"
        onClicked: {
            val = cpp.slotsMsg("Hello")
            console.log(val);
        }
        Component{
            onCompleted: {


                console.log("onCompleted")

            }

            onDestroyed: {

                console.log("onDestroyed")

            }

        }

    }
}
