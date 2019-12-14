import QtQuick 2.0
import QtQuick.Window 2.0
import QtQuick.Controls 1.4

Window {
    width: 800
    height: 600
    visible: true

    Rectangle {
        id: mainRect
        anchors.fill: parent

        Loader {
            id: loader1
            sourceComponent: itemCompont
            anchors.top: parent.top
            anchors.topMargin: 10
            width: mainRect.width
            height: 50

            function onDisDeleteThis() {
                loader1.sourceComponent = undefined
            }

            onLoaded: {
                item.color = 'red'
                loader1.item.deleteThis.connect(loader1.onDisDeleteThis)
            }
        }

        Loader {
            id: loader2
            source: 'qrc:/QML/TestCompont.qml'
            anchors.top: loader1.bottom
            anchors.topMargin: 10
            width: mainRect.width
            height: 50

            function onDisDeleteThis() {
                loader2.source = ''
            }

            onLoaded: {
                loader2.item.deleteThis.connect(loader2.onDisDeleteThis)
            }
        }

        Component {
            id: itemCompont
            Rectangle {
                id: compontRect
                color: 'blue'
                implicitWidth: 200
                implicitHeight: 50

                signal deleteThis()

                Text {
                    id: interText
                    anchors.left: parent.left
                    anchors.leftMargin: 10
                    anchors.verticalCenter: parent.verticalCenter
                    text: qsTr("text")
                }
                Button {
                    anchors.margins: 5
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.right: parent.right
                    text: '删除'

                    onClicked: {
                        compontRect.deleteThis()
                    }
                }
            }
        }
    }
}
