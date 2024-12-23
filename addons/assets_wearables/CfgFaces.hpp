// Identity Macros
#define MACRO_FACES_GREEK_CARTEL \
    identityTypes[] = {"Head_Greek_Cartel"}; \
    disabled = 1

class CfgFaces {
    class Default;
    class Man_A3: Default {
        class GreekHead_A3_01;
        class GreekHead_A3_02;
        class GreekHead_A3_03;
        class GreekHead_A3_05;
        class GreekHead_A3_06;
        class GreekHead_A3_07;
        class GreekHead_A3_08;
        class GreekHead_A3_09;

        class TACU_Cartel_Face_01: GreekHead_A3_01 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_01_co.paa);
            displayName = "Athanasiadis (Cartel)";
        };
        class TACU_Cartel_Face_02: GreekHead_A3_02 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_02_co.paa);
            displayName = "Baros (Cartel)";
        };
        class TACU_Cartel_Face_03: GreekHead_A3_03 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_03_co.paa);
            displayname = "Constantinou (Cartel)";
        };
        class TACU_Cartel_Face_04: GreekHead_A3_05 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_04_co.paa);
            displayname = "Doukas (Cartel)";
        };
        class TACU_Cartel_Face_05: GreekHead_A3_06 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_05_co.paa);
            displayname = "Gikas (Cartel)";
        };
        class TACU_Cartel_Face_06: GreekHead_A3_07 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_06_co.paa);
            displayName = "Christou (Cartel)";
        };
        class TACU_Cartel_Face_07: GreekHead_A3_08 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_07_co.paa);
            displayName = "Kanelloupou (Cartel)";
        };
        class TACU_Cartel_Face_08: GreekHead_A3_09 {
            MACRO_FACES_GREEK_CARTEL;
            textureHL = QPATHTOF(data\faces\cartel_face_08_co.paa);
            displayname = "Savalas (Cartel)";
        };
    };
};
