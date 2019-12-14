import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls.Material 2.12
import Qt.labs.settings 1.1
import Qt.labs.platform 1.1 as Platform
ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")


    Material.theme: MPalette.theme
    Material.background: MPalette.background


    background: Rectangle {
        color: MSettings.darkTheme ? "#303030" : "#FFFFFF"
    }

    ToolTip {

        background: Rectangle {
            width: parent
            height: parent
            color: "#80000000"
        }
        id: busyIndicator
        parent: ApplicationWindow.overlay
        visible: true
        text: "Loading, please wait"
        font.pixelSize: 14

    }
}
