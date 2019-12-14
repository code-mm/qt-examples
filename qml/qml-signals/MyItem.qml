import QtQuick 2.5
import QtQuick.Controls 1.4
import QtQuick.Layouts 1.2
import QtQuick.Window 2.2

Rectangle{
    property alias m_x: button.x
    signal call(int x)
    Button {
        id: button
        x: 100
        y: 100
        width: 200
        height: 45
        text: "Btn"
        onClicked: call(100)
    }
}
