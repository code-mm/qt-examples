import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Rectangle{

        width: parent.width
        height: parent.height

        id:root

        color: "#fff000"

        Loader {
            id: loader1
            sourceComponent: itemCompont
            anchors.top: parent.top
            anchors.topMargin: 10
            width: parent.width
            height: 50

            source: "qrc:/MyItem.qml"

            function onDisDeleteThis() {
                loader1.sourceComponent = undefined
            }

            onLoaded: {
                root.color = 'red'
                loader1.item.deleteThis.connect(loader1.onDisDeleteThis)
            }
        }

    }



}
