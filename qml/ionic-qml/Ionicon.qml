import QtQuick 2.7
import QtGraphicalEffects 1.0
Image {
    property string icon
    property alias color: overlay.color
    source: icon + ".svg"
    ColorOverlay {
        id: overlay
        anchors.fill: parent
        source: parent
    }
}
