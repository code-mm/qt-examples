
import QtQuick 2.0
import QtQuick.Controls 2.0

Item {


    Row{



        Button{
            id:buttonok
            text:"OK"
            objectName: "button"


            function changeText(msg){

                console.log("接收到的消息:"+msg)
                buttonok.text=msg
                return "change success"
            }

        }


        Button{
            id:buttonno
            text:"NO"
        }
    }


    Component.onCompleted: {






    }

}
