import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0


Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")

    signal hah()



    EditText{

        onChangeText: {

            console.log(text)
        }

    }
    MyItem{
        onCall: {
            console.log(x)
        }
    }
}
