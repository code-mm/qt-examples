import QtQuick 2.0
import QtQuick.Window 2.0
import QtWebEngine 1.7
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.11
import QtWebChannel 1.0



Window {
    visible: true
    width: 640
    height: 480
    title: qsTr("Hello World")





    WebEngineView {
        id: webEngineView
        // 网页路径
        url: "file:///Users/maohuawei/Downloads/a.html"
        anchors.fill: parent
        settings.pluginsEnabled: true
        settings.screenCaptureEnabled: true
        //AllowRunningInsecureContent
        settings.allowRunningInsecureContent: true
        settings.javascriptEnabled: true
        webChannel: channel
        onJavaScriptConsoleMessage: {
            console.log(message)
        }


        onFeaturePermissionRequested: {
            if(feature  == WebEngineView.MediaAudioCapture
                    || feature == WebEngineView.MediaAudioVideoCapture
                    || feature ==  WebEngineView.MediaVideoCapture){
                grantFeaturePermission(securityOrigin,feature,true)
            } else{
                grantFeaturePermission(securityOrigin,feature,false)
            }
        }
    }


    WebChannel {
        id: channel

    }



    Button {
        text: "Enlighten"
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 30
    }
}
