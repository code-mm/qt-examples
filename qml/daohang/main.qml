import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.LocalStorage 2.0
import QtQuick.Layouts 1.12

Window {
    visible: true
    width: 640
    height: 480

    Navigation{
        id:navigation
        width: 500
        height: 80
        Connections{
            onChangeItem: {
                console.log(position)
            }
        }
    }
}
