import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtGraphicalEffects 1.0

ApplicationWindow {
    visible: true
    width: 800
    height: 480
    title: qsTr("Hello World")




    SwipeView {
        id: swipeView
        anchors.fill: parent
        currentIndex: tabBar.currentIndex

        Page1 {

        }

        Page2 {

        }
        Page3 {
            /*Label {
                text: qsTr("Tercera page")
                anchors.centerIn: parent
            }*/
        }
    }

    footer: TabBar {
        id: tabBar
        currentIndex: swipeView.currentIndex
        TabButton {
            text: qsTr("Personalizar")
        }
        TabButton {
            text: qsTr("Escenas")
        }
        TabButton {
            text: qsTr("Seguridad")
        }
    }





}
