import QtQuick 2.4

import QtQuick 2.0
import QtQuick.Controls 2.0
import QtQuick.Window 2.0


import MyModule 1.0


Window{

    visible: true
    width: 500
    height: 500

    Rectangle {
        Component.onCompleted: {
            myCppObj.mycolour = "red"
            myCppObj.num = 300;
        }
        height: myCppObj.num
        width: myCppObj.num
        color: myCppObj.mycolour

        Text {
            id: name
            text: qsTr("This is from C++ class:\t"+myCppObj.getClassName()+" \n enum value: "+MyCPPClass.EIGHT)
        }
    }

}
