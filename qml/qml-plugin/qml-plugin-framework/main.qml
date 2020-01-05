import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.0
Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("插件框架")

    Button{
        text: "加载插件"

        onClicked: {
            // 加载插件
            // 插件名称
            // 插件开放函数

            qmlPluginFramework.loaderPlugin("libimpl.1.0.0.dylib","LoaderPluginApp")

        }
    }
}
