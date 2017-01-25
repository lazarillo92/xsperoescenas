import QtQuick 2.7
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.0
import QtQuick.Controls.Material 2.0

Item {
    width: 800
    property alias slider: slider
    property alias radioButton3: radioButton3
    property alias iconfoco: iconfoco
    property alias switch3: switch3
    property alias switch2: switch2
    z: -1



    Image {
        id: xsperologo
        x: 8
        y: 8
        source: "res/logo.png"

        Rectangle {
            id: rectangle
            x: -7
            y: -8
            width: 800
            height: 94
            color: "#303030"
            z: -2
        }

        Rectangle {
            id: rectangle1
            x: -7
            y: 81
            width: 800
            height: 394
            color: "#4d4d4d"
            z: -2

            Button {
                id: button
                x: 680
                y: 277
                text: qsTr("Guardar")
            }
        }

        Rectangle {
            id: rectangle3
            x: -7
            y: 81
            width: 160
            height: 394
            color: "#4b4b4b"
            z: -2
        }
    }








    Image {
        id: iconRGB
        x: 518
        y: 137

        Text {
            id: text4
            x: 103
            y: 6
            width: 110
            height: 37
            color: "#ffffff"
            text: qsTr("RGB")
            font.pixelSize: 30
            z: 2
        }

        Rectangle {
            id: rectangle2
            x: 105
            y: 54
            width: 35
            height: 28
            color: "#ff0000"
            z: -2
        }
        source: "res/icon_rgb.png"
        z: 3
    }

    Image {
        id: iconfoco
        x: 224
        y: 137
        width: 54
        height: 73
        z: 2
        source: "res/foco.png"

        Text {
            id: text1
            x: -11
            y: 81
            width: 76
            height: 37
            color: "#ffffff"
            text: qsTr("Focos")
            z: 2
            font.pixelSize: 30
        }

        Switch {
            id: switch2
            x: 89
            y: 49
            text: qsTr("azul")
            scale: 1.4
            antialiasing: false
        }

        Switch {
            id: switch3
            x: 77
            y: 90
            text: qsTr("rojo")
            antialiasing: false
        }
    }















    Image {
        id: icondimmer
        x: 211
        y: 315
        z: 3
        source: "res/icon_dimerc.png"

        Slider {
            id: slider
            x: 0
            y: 53
            value: 0.5
        }

        Text {
            id: text3
            x: 57
            y: 3
            width: 110
            height: 37
            color: "#ffffff"
            text: qsTr("Dimmer")
            font.pixelSize: 30
            z: 2
        }
    }



    Text {
        id: textoescenas
        x: 27
        y: 162
        width: 97
        height: 24
        color: "#ffaa00"
        text: qsTr("Personalizar ")
        z: 5
        font.pixelSize: 18

        RadioButton {
            id: radioButton
            x: -6
            y: 67
            width: 110
            height: 49
            text: qsTr("Clases")
        }

        RadioButton {
            id: radioButton1
            x: -6
            y: 116
            text: qsTr("Proyección")
        }

        RadioButton {
            id: radioButton2
            x: -7
            y: 162
            text: qsTr("Apagar Todo")
        }

        Text {
            id: text5
            x: 17
            y: 26
            width: 66
            height: 14
            color: "#ffaa00"
            text: qsTr("Escenas")
            renderType: Text.NativeRendering
            font.pixelSize: 18
        }
    }









































    Image {
        id: iconecram
        x: 500
        y: 293
        Text {
            id: text2
            x: -20
            y: 43
            width: 110
            height: 37
            color: "#ffffff"
            text: qsTr("Ecram")
            font.pixelSize: 30
            z: 2
        }

        Switch {
            id: switch1
            x: 102
            y: -1
            text: qsTr("Switch")
        }
        source: "res/icon_cortina.png"
        z: 2
    }

    RadioButton {
        id: radioButton3
        x: 644
        y: 24
        width: 110
        height: 49
        text: qsTr("iniciar")
    }

    Connections {
        target: slider
        onClicked: print("clicked")
    }

}
