
#include <fstream>
#include <iostream>
#include <ios>
#include <string>
#include <cstring>
#include <sstream>
#include <locale>
#include <algorithm>
#include <windows.h>
#include <cfloat>
#include <cmath>
#include <ctime>
#include <cstddef>
#include <cstdlib>
#include <cstdarg>
#include <cstdio>
#include <vector>
#include <iomanip>
#include <sstream>
#include <list>
#include <memory>
#include <new>
#include <sys/time.h>
#include <chrono>
#include <random>
#include <array>

//Fall conio.h nicht vorhanden, die nächsten zwei Zeilen löschen.
#include <conio.h>
#define waitkey getch()

#define WriteTextFile ofstream
#define ReadTextFile ifstream
typedef  signed char      sbyte;
//typedef  signed char      byte
typedef  signed char      schar;
typedef  unsigned char    uchar;
typedef  unsigned char    ubyte;
typedef  unsigned short   ushort;
typedef  unsigned short   uword;
typedef  signed short     sshort;
typedef  signed short     sword;
typedef  unsigned long    uint;
typedef  signed long      sint;
typedef  signed long      slong;
typedef  unsigned long    ulong;
typedef  const char * ctxt;
typedef  char * fCstring;
typedef  char * fcstring;
typedef  double real;
typedef  signed char      SBYTE;
//typedef  signed char      BYTE
typedef  signed char      SCHAR;
typedef  unsigned char    UCHAR;
typedef  unsigned char    UBYTE;
typedef  unsigned short   USHORT;
typedef  unsigned short   UWORD;
typedef  signed short     SSHORT;
typedef  signed short     SWORD;
//typedef  unsigned long    UINT
typedef  signed long      SINT;
typedef  signed long      SLONG;
typedef  unsigned long    ULONG;
typedef  const char * CTXT;
typedef  char * FCSTRING;
typedef  double REAL;
typedef  signed char      sByte;
typedef  signed char      SByte;
typedef  signed char      Byte;
typedef  signed char      sChar;
typedef  signed char      SChar;
typedef  unsigned char    uChar;
typedef  unsigned char    UChar;
typedef  unsigned char    uByte;
typedef  unsigned char    UByte;
typedef  unsigned short   uShort;
typedef  unsigned short   UShort;
typedef  unsigned short   uWord;
typedef  unsigned short   UWord;
typedef  signed short     sShort;
typedef  signed short     SShort;
typedef  signed short     sWord;
typedef  signed short     SWord;
typedef  unsigned long    uInt;
typedef  unsigned long    UInt;
typedef  signed long      sInt;
typedef  signed long      SInt;
typedef  signed long      sLong;
typedef  signed long      SLong;
typedef  unsigned long    uLong;
typedef  unsigned long    ULong;
typedef  const char * cTxt;
typedef  const char * CTxt;
typedef  const char * Ctxt;
typedef  char * FCstring;
typedef  char * FCString;
typedef  char * fCString;
typedef  char * fcString;
typedef  double Real;
using namespace std;

// _____ Code generated with Dirty++ 0.4 alpha _____
int keepall_flag = 0;
int keepdecls_flag = 0;


// Header , Globals, Functions am Ende zusammensetzen
//Fold+ Init 1
#define MAXCODEARRAY 2000
#define CPP 2
#define BASIC 1
#define ISDLL 3
#define ISBBDLL 4
#define ISPRG 0
#define markSWITCH = 1
#define markSELECT = 2
int semkommentar = 1;
int usebasicvar = 0;
int loopvar; // statt int i in for next
int usemakeDLL = 0;
// int IamMain = 0
// int IamClass = 0
int var_debugmode = 0;
int var_debugset = 1;
int var_debugtemp = 1;
string debuggroup[100];
// #### Wird nicht benötigt ####
// //Hole aktuellen Pfad in "C++ String" unter Verwendung von WinAPI Function: GetCurrentDirectory( size_t size, char buffer )
// Function string GetDir()
// const size_t sz = 512
// char buf[sz]
// GetCurrentDirectory(sz, buf)
// return string(buf)
// endf
// // Setze Pfad von aktuellem Ordner mit "C++ string" unter Verwendung von WinAPI Function: SetCurrentDirectory()
// Function bool SetDir(const string& p)
// bool scd
// scd = SetCurrentDirectory(p.c_str())
// return scd
// endf
//EndFold-
//Fold+ Funktionen

int StrToInt(string stri) {
    int TheInt;
    std::istringstream is(stri);
    is >> TheInt;
    return TheInt;
} //end function


string IntToStr(int theInt) {
    std::ostringstream os;
    os << theInt;
    return (os.str());
} //end function


string IntToStr5(int theInt) {
    std::ostringstream os;
    os << setfill ('0') << setw (5);
    os << theInt;
    return (os.str());
} //end function


string trim(string tstr) {
    int first = tstr.find_first_not_of(" \n\r\t");
    int tlen = tstr.find_last_not_of(" \n\r\t") - first + 1;
    if (first >= 0) {
        return tstr.substr( first, tlen);
    }
    else {
        return "";
    } //endif
} //end function


string ltrim(string tstr) {
    int first = tstr.find_first_not_of(" \n\r\t");
    int tlen = tstr.length() - first + 1;
    if (first >= 0) {
        return tstr.substr( first, tlen);
    }
    else {
        return "";
    } //endif
} //end function


string rtrim(string tstr) {
    int tlen = tstr.find_last_not_of(" \n\r\t") + 1;
    if (tstr.length() >= 0) {
        return tstr.substr( 0, tlen);
    }
    else {
        return "";
    } //endif
} //end function

// CTokenStringArrays(Quellstring , LowerArray, string sta[], int anz)

int CTokenStringArrays(string stm, string stb[], string sta[], int anz) {
    const int  CH_ALNUM = 1;
    const int  CH_EMPTY = 2;
    const int  CH_OTHER = 3;
    const int  CH_OTHER2 = 4;
    int ch_flag = 0;
    int akt_array = 0;
    char istext = 0;
    char ischar = 0;
    char low;
    for  (int j = 0; j < anz; j++) {
        sta[j].clear();
        stb[j].clear();
    } //next
    int slen = stm.length()-1;
    for  (int i = 0; i <= slen; i++) {
        if (stm[i] == 34 || istext == 1) {
            if (stm[i] == 34 && istext == 1) {
                if (stm[i-1] != 92) {
                    istext = 0;
                    ch_flag = CH_EMPTY;
                } //endif
            }
            else if (stm[i] == 34 && istext == 0){
                akt_array++;
                istext = 1;
            } //endif
            sta[akt_array] = sta[akt_array] + stm[i];
            low = tolower(stm[i]);
            stb[akt_array] = stb[akt_array] + low;
        }
        else if (stm[i] == 39 || ischar == 1){
            if (stm[i] == 39 && ischar == 1) {
                ischar = 0;
                ch_flag = CH_EMPTY;
            }
            else if (stm[i] == 39 && ischar == 0){
                akt_array++;
                ischar = 1;
            } //endif
            sta[akt_array] = sta[akt_array] + stm[i];
            low = tolower(stm[i]);
            stb[akt_array] = stb[akt_array] + low;
        }
        else if (isalnum(stm[i]) || stm[i] == '_' || stm[i] == '[' || stm[i] == ']'){
            if (ch_flag == 0 || ch_flag == CH_ALNUM || ch_flag == CH_OTHER2) {
                sta[akt_array] = sta[akt_array] + stm[i];
                low = tolower(stm[i]);
                stb[akt_array] = stb[akt_array] + low;
                ch_flag = CH_ALNUM;
            }
            else {
                ch_flag = CH_ALNUM;
                if (ch_flag != CH_OTHER2) 
                    akt_array++;
                sta[akt_array] = sta[akt_array] + stm[i];
                low = tolower(stm[i]);
                stb[akt_array] = stb[akt_array] + low;
            } //endif
        }
        else if (stm[i] > 32){
            if (ch_flag == 0 || ch_flag == CH_OTHER) {
                if (stm[i] == '(' || stm[i] == ')' || stm[i] == ';' || stm[i] == 44) {
                    akt_array++;
                    sta[akt_array] = sta[akt_array] + stm[i];
                    stb[akt_array] = stb[akt_array] + stm[i];
                    ch_flag = CH_OTHER2;
                    akt_array++;
                }
                else {
                    sta[akt_array] = sta[akt_array] + stm[i];
                    stb[akt_array] = stb[akt_array] + stm[i];
                    ch_flag = CH_OTHER;
                } //endif
            }
            else {
                if (stm[i] == '(' || stm[i] == ')' || stm[i] == ';' || stm[i] == 44) {
                    akt_array++;
                    sta[akt_array] = sta[akt_array] + stm[i];
                    stb[akt_array] = stb[akt_array] + stm[i];
                    ch_flag = CH_OTHER2;
                    akt_array++;
                }
                else {
                    ch_flag = CH_OTHER;
                    if (ch_flag != CH_OTHER2) 
                        akt_array++;
                    sta[akt_array] = sta[akt_array] + stm[i];
                    stb[akt_array] = stb[akt_array] + stm[i];
                } //endif
            } //endif
        }
        else if (stm[i] < 33){
            if (ch_flag != 0) {
                if (ch_flag != CH_OTHER2) 
                    ch_flag = CH_EMPTY;
            } //endif
        } //endif
        //if (akt_array >= anz) return akt_array
    } //next
    return akt_array;
} //end function

// CommaTokenStringArrays(Quellstring , LowerArray, string sta[], int anz)

int CommaTokenStringArrays(string stm, string stb[], string sta[], int anz) {
    //const int  CH_ALNUM = 1
    const int  CH_EMPTY = 2;
    //const int  CH_OTHER = 3
    int ch_flag = 0;
    int akt_array = 0;
    int merk = 0;
    char istext = 0;
    char ischar = 0;
    char low;
    for  (int j = 0; j < anz; j++) {
        sta[j].clear();
        stb[j].clear();
    } //next
    int slen = stm.length()-1;
    for  (int i = 0; i <= slen; i++) {
        if (stm[i] == 34 || istext == 1) {
            if (stm[i] == 34 && istext == 1) {
                if (stm[i-1] != 92) {
                    istext = 0;
                    ch_flag = CH_EMPTY;
                } //endif
            }
            else if (stm[i] == 34 && istext == 0){
                istext = 1;
            } //endif
            sta[akt_array] = sta[akt_array] + stm[i];
            low = tolower(stm[i]);
            stb[akt_array] = stb[akt_array] + low;
        }
        else if (stm[i] == 39 || ischar == 1){
            if (stm[i] == 39 && ischar == 1) {
                ischar = 0;
                ch_flag = CH_EMPTY;
            }
            else if (stm[i] == 39 && ischar == 0){
                ischar = 1;
            } //endif
            sta[akt_array] = sta[akt_array] + stm[i];
            low = tolower(stm[i]);
            stb[akt_array] = stb[akt_array] + low;
        }
        else if (stm[i] == 40){
            sta[akt_array] = sta[akt_array] + stm[i];
            merk = 1;
            for  ( int j=i+1; j <= slen; j++) {
                i++;
                sta[akt_array] = sta[akt_array] + stm[j];
                low = tolower(stm[j]);
                stb[akt_array] = stb[akt_array] + low;
                if (stm[j] == 40) 
                    merk++;
                if (stm[j] == 41) {
                    merk--;
                    if (merk == 0) 
                        break;
                } //endif
            } //next
        }
        else if (stm[i] == ','){
            sta[akt_array] = trim(sta[akt_array]);
            stb[akt_array] = trim(stb[akt_array]);
            akt_array++;
        }
        else {
            sta[akt_array] = sta[akt_array] + stm[i];
            low = tolower(stm[i]);
            stb[akt_array] = stb[akt_array] + low;
        } //endif
        //if (akt_array >= anz) return akt_array
    } //next
    return akt_array;
} //end function


string CutComment( string& code) {
    string tcode, pcode;
    tcode = code;
    code.clear();
    int merk = 0;
    int j,i;
    int slen = tcode.length();
    for  ( i=0; i < slen; i++) {
        if (tcode[i] == 34) {
            pcode = pcode + tcode[i];
            for  ( j=i+1; j < slen; j++) {
                pcode = pcode + tcode[j];
                i++;
                if (tcode[j] == 34) {
                    i = j;
                    break;
                } //endif
            } //next
        }
        else if (tcode[i] == 39){
            pcode = pcode + tcode[i];
            for  ( j=i+1; j < slen; j++) {
                pcode = pcode + tcode[j];
                i++;
                if (tcode[j] == 39) {
                    i = j;
                    break;
                } //endif
            } //next
        }
        else if (tcode[i] == 40){
            pcode = pcode + tcode[i];
            merk = 1;
            for  ( j=i+1; j < slen; j++) {
                i++;
                pcode = pcode + tcode[j];
                if (tcode[j] == 40) 
                    merk++;
                if (tcode[j] == 41) {
                    merk--;
                    if (merk == 0) {
                        i = j;
                        break;
                    } //end if
                } //endif
            } //next
        }
        else if (tcode[i] == '/'){
            if (tcode[i+1] == '/') {
                code = trim(pcode);
                return tcode.substr(i,slen-i);
            }
            else {
                pcode = pcode + tcode[i];
            } //endif
        }
        else if (tcode[i] == ';' && semkommentar == 1){
            code = trim(pcode);
            tcode.replace(i,1,"//"); //
            return tcode.substr(i,slen-i+1);
        }
        else {
            pcode = pcode + tcode[i];
        } //endif
    } //next
    code = trim(pcode);
    tcode.clear();
    return tcode;
} //end function


string ExtractFileExt ( string& str ) {
    size_t found;
    found=str.find_last_of(".");
    return str.substr(0,found);
} //end function


void InsertFile( string& fname, ofstream& fb ) {
    string sline;
    ReadTextFile InSource( fname.c_str() );
    if (InSource) {
        while (!InSource.eof()){
            getline(InSource, sline);
            fb << sline << endl;
        } //wend
        InSource.close();
    } //endif
} //end function


string lcase( string astr ) {
    string bstr;
    char tm;
    for (uint j = 0; j < astr.length(); j++) {
        tm = tolower(astr[j]);
        bstr = bstr + tm;
    } //next
    return bstr;
} //end function


string ReplaceAll(string stra,string strb,string strc) {
    size_t pos;
    pos = stra.find(strb);
    while (string::npos != pos){
        stra.replace(pos, strb.length(), strc);
        pos = stra.find(strb);
    } //wend
    return stra;
} //end function


string CutFirstWord (  string strA ) {
    strA.append(" ");
    return trim(strA.substr( strA.find_first_of(" =(+-*/%:<>\t\n\r")));
} //end function


string GetFirstWord (  string strA ) {
    strA=trim(strA);
    strA.append(" ");
    return strA.substr(0,strA.find_first_of(" =(+-*/%:<>\t\n\r"));
} //end function


string GetAfterFind( string strA , string strF ) {
    string strB = lcase(strA);
    return strA.substr( strB.find( lcase(strF) )+strF.size()  );
} //end function


string replaceAll(string strA, const string& strF, const string& strR) {
    size_t p = 0;
    size_t f;
    while ((f == strA.find(strF , p)) != string::npos){
        strA.replace(f, strF.size(), strR);
        p = f + strR.size();
    } //wend
    return strA;
} //end function


int FindString(string instring, string tofind) {
    std::size_t found;
    int out;
    found=instring.find(tofind);
    if (found != std::string::npos) {
        out =  (int)found;
        return out;
    }
    else {
        return -1;
    } //endif
} //End Function

string GetStringBefore (  string instring, string strA ) {
    instring.append(" ");
    return instring.substr( 0,instring.find(strA));
} //end function

//<<<< grabStringBetween [ ] --- Funktion mid oder sowas.

string GetStringBetween( string instring, string strA, string strB) {
    std::size_t fA, fB;
    fA=instring.find(strA);
    fB=instring.find(strB);
    if (fA != std::string::npos && fB != std::string::npos) {
        fA++;
        fB = fB - fA;
        return instring.substr(fA,fB);
    }
    else {
        return "";
    } //endif
} //End Function
//EndFold-
//Fold+ Init 2
int Einzug = 0;
string EinzugStr = "";
//int LoopType[1000]
//int LoopNum
//int what_repeat[1000]
//
// switch = 1, select = 2
int codeout = 0; //Variable welche bestimmt in welche Datei geschrieben wird, 1 = c++ code, 0 = Functions, 3= ändert sich danach auf 0
int lastcodeout = 0;
int thatcodeout = 0;
int what_block[10000];
int what_block_akt = 0;
int what_repeat[10000];
int what_repeatbreak[10000];
int what_repeat_max = 0;
int what_repeat_akt = 0;
string repeatarray[10000];
int what_select[10000];
int what_selectbreak[10000];
int what_select_max = 0;
int what_select_akt = 0;
string selectarray[10000];
string insGlobals; // Variable welche Globals enthält evtl. gleich in externe Datei schreiben
int PRGSTAT = 0;
int PRGopenSTAT = 0;
int aktBAScode = 0;
int globalassign = 0;
string autovFile = "";
int autoversCode[200];
string autoversStore[200];
int aktAutoVers = 0;
int useAutovStore = 1;
int isAVinOpen = 0;
int isAVoutOpen = 0;
int countAV = 0;
int avc = 0;
size_t foundpos;
ifstream AVinFile;
ofstream AVoutFile;
int DirtyVersion = 51;
//EndFold-
// ########################################## MAIN ##################################################################
//Fold+ main
//Fold+ MainLoop - Beginn
//EndFold-
//EndFold-
//SourceCode-ENDE

int main( int argc, char *argv[] ) {
    char TheCurDir[500];
    char DieserPfad[500];
    char *DiesesPrg;
    // string tempFolder
    // tempFolder = GetTempPath()
    if (GetModuleFileName(NULL , TheCurDir , 499)) {
        if (GetFullPathName(TheCurDir , sizeof(TheCurDir) , DieserPfad , &DiesesPrg)) {
            DieserPfad[DiesesPrg-DieserPfad] = '\0';
        } //endif
    } //endif
    string theline, comment, cppline , multiline , includefile , dllinclude;
    string dummy, dummy2 , dummy3, dummy4;
    string lowarray[MAXCODEARRAY];
    string codearray[MAXCODEARRAY];
    uchar firstchar, lastchar;
    //char tempCstring[100]
    int incomment = 0;
    int anzarray;
    int tempa, tempb, tempc, tempd;
    int caselevel = 0;
    int scaselevel = 0;
    //int firstcase = 0
    //int declCounter = 0
    char endklammer = 0;
    char startarray = 1;
    char thenaktiv = 0;
    size_t found, found1;
    char ismultline = 0;
    char toinside = 0;
    char twosemi = 0;
    int firstfound = 0;
    char modus = BASIC;
    char noreplname = 0;
    char thecompiler = 0;
    string prgName = argv[1];
    char PrgDir[500];
    strcpy (PrgDir,prgName.c_str());
    char PrgPfad[500];
    char *myPrg;
    // string tempFolder
    // tempFolder = GetTempPath()
    if (GetFullPathName(PrgDir , sizeof(PrgDir) , PrgPfad , &myPrg)) {
        PrgPfad[myPrg-PrgPfad] = '\0';
    } //endif
    cout  <<  "Programmpfad: " << string(PrgPfad) << endl;
    string purePrgName = ExtractFileExt ( prgName );
    string prgNameCpp = purePrgName + ".cpp";
    string prgNameCode = purePrgName + ".code";
    string prgNameFunc = purePrgName + ".func";
    string prgNameGlob = purePrgName + ".glob";
    string declsName = purePrgName + ".decls";
    string dllName =  purePrgName + ".dll";
    string cppdeclare = purePrgName + "_decl.h";
    string avFile = purePrgName + ".autoav";
    string objectfile = purePrgName + ".o";
    string TheHeader = "StdInclude.h";
    ifstream* BasicSource[200];
    WriteTextFile declsfile;
    BasicSource[aktBAScode] = (new ifstream( prgName.c_str() ) );
    WriteTextFile CppSource( prgNameCode.c_str() );
    WriteTextFile CppAll( prgNameCpp.c_str() );
    WriteTextFile DeclareFile( cppdeclare.c_str() );
    WriteTextFile FuncFile( prgNameFunc.c_str() );
    WriteTextFile GlobFile( prgNameGlob.c_str() );
    cout  <<  "Start" << endl;
    if (BasicSource[aktBAScode]->good() && CppSource.good()) {
        cout  <<  "DirtyBasic V 0.4 alpha " << endl;
        cout  <<  "start compiling ..." << endl;
startread:
        while (!BasicSource[aktBAScode]->eof()){
            cppline.clear();
            comment.clear();
            theline.clear();
            EinzugStr.clear();
            getline(*BasicSource[aktBAScode], theline);
            theline = trim( theline );
            comment = CutComment( theline );
thenread:
            firstchar = theline[0];
            lastchar = theline[theline.size()-1];
            if (lastchar == '_') {
                theline.erase( theline.size()-1,1 );
                ismultline = 1;
                multiline = multiline + " " + theline;
                continue;
            } //endif
            if (ismultline == 1) {
                ismultline = 0;
                multiline = multiline + " " + theline;
                theline.clear();
                theline = multiline;
                multiline.clear();
            } //endif
            if (PRGopenSTAT == ISBBDLL) {
                declsfile.open( declsName.c_str() );
                PRGopenSTAT = 0;
                declsfile <<  ".lib \"" +  dllName +"\"\n\n" << endl;
            } //endif
            anzarray = CTokenStringArrays(theline, lowarray, codearray, MAXCODEARRAY);
            // evtl. entfernen, da cppline nicht aus Array zusammengesetzt ist
            if (codearray[0] == "/*" || incomment == 1) {
                found = theline.find("*/");
                if (found != string::npos) {
                    incomment = 0;
                    if (codeout == 1 || lastcodeout == 1) {
                        CppSource  << theline  << endl;
                    }
                    else if (codeout == 0 || lastcodeout == 0) {
                        FuncFile  << theline  << endl;
                    }
                    else {
                        cout  <<  "codeout problem 1" << endl;
                    } //endif
                    continue;
                }
                else {
                    incomment = 1;
                    if (codeout == 1 || lastcodeout == 1) {
                        CppSource  << theline  << endl;
                    }
                    else if (codeout == 0 || lastcodeout == 0) {
                        FuncFile  << theline  << endl;
                    }
                    else {
                        cout  <<  "codeout problem 2" << endl;
                    } //endif
                    continue;
                } //endif
            } //endif
            if (modus == BASIC) {
                //cout << lowarray[1] << " "
                if (lowarray[0] == "cpp") {
                    if (theline == "cpp") {
                        modus = CPP;
                    }
                    else {
                        cppline = theline.substr( 3 );
                    } //endif
                }
                else if (lowarray[0] == "c" && lowarray[1] == "++"){
                    if (theline == "c++") {
                        modus = CPP;
                    }
                    else {
                        cppline = theline.substr( 3 );
                    } //endif
                }
                else if (lowarray[0] == "#"){
                    cppline = theline;
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ IF  ++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "if"){
                    endklammer = 0;
                    if (codearray[1] != "(") {
                        endklammer = 1;
                        cppline = "if (";
                        startarray = 1;
                    }
                    else {
                        cppline = "if ";
                        startarray = 1;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (endklammer != 10) {
                            if (codearray[i] == "=") {
                                codearray[i] = " == ";
                            }
                            else if (codearray[i] == "=="){
                                codearray[i] = " = ";
                            }
                            else if (codearray[i] == ","){
                                codearray[i] = " , ";
                            }
                            else if (codearray[i] == ";"){
                                codearray[i] = " ; ";
                            }
                            else if (codearray[i] == "!="){
                                codearray[i] = " != ";
                            }
                            else if (codearray[i] == "<>"){
                                codearray[i] = " != ";
                            }
                            else if (codearray[i] == "><"){
                                codearray[i] = " != ";
                            }
                            else if (codearray[i] == "<"){
                                codearray[i] = " < ";
                            }
                            else if (codearray[i] == ">"){
                                codearray[i] = " > ";
                            }
                            else if (codearray[i] == "<="){
                                codearray[i] = " <= ";
                            }
                            else if (codearray[i] == ">="){
                                codearray[i] = " >= ";
                            }
                            else if (codearray[i] == "*="){
                                codearray[i] = " *= ";
                            }
                            else if (codearray[i] == "/="){
                                codearray[i] = " /= ";
                            }
                            else if (codearray[i] == "-="){
                                codearray[i] = " -= ";
                            }
                            else if (codearray[i] == "+="){
                                codearray[i] = " += ";
                            }
                            else if (codearray[i] == "||"){
                                codearray[i] = " || ";
                            }
                            else if (codearray[i] == "&&"){
                                codearray[i] = " && ";
                            }
                            else if (lowarray[i] == "or"){
                                codearray[i] = " || ";
                            }
                            else if (lowarray[i] == "and"){
                                codearray[i] = " && ";
                            }
                            else if (lowarray[i] == "bitor"){
                                codearray[i] = " | ";
                            }
                            else if (lowarray[i] == "bitand"){
                                codearray[i] = " & ";
                            }
                            else if (lowarray[i] == "not"){
                                codearray[i] = " !";
                            }
                            else if (lowarray[i] == "then"){
                                if (i < anzarray) {
                                    if (endklammer == 1) {
                                        cppline = cppline + ") ";
                                        endklammer = 10;
                                        break;
                                    }
                                    else {
                                        cppline = cppline + " ";
                                        endklammer = 10;
                                        break;
                                    } //endif
                                }
                                else {
                                    codearray[i] = "";
                                } //endif
                            } //endif
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ") {";
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + cppline;
                        Einzug += 4;
                        EinzugStr.assign(Einzug, 32);
                    }
                    else if (endklammer == 10){
                        dummy = GetAfterFind( theline , "then" );
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + cppline;
                        if (codeout == 1 || lastcodeout == 1) {
                            CppSource  << cppline  << endl;
                        }
                        else if (codeout == 0 || lastcodeout == 0) {
                            // Function Sammelfile output hier   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                            FuncFile  << cppline  << endl;
                        }
                        else {
                            cout  <<  "codeout problem 3" << endl;
                        } //endif
                        cppline.clear();
                        theline = trim(dummy);
                        comment.clear();
                        Einzug += 4;
                        EinzugStr.assign(Einzug, 32);
                        thenaktiv = 1;
                        //Print theline
                        goto  thenread;
                    }
                    else {
                        cppline = cppline + " {";
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + cppline;
                        Einzug += 4;
                        EinzugStr.assign(Einzug, 32);
                    } //endif
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ For +++++++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "for"){
                    endklammer = 0;
                    dummy.clear();
                    twosemi = 0;
                    toinside = 0;
                    startarray = 0;
                    if (codearray[1] != "(") {
                        endklammer = 1;
                        cppline = "for (";
                        startarray = 1;
                    }
                    else {
                        cppline = "for ";
                        startarray = 2;
                    } //endif
                    firstfound = 0;
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (lowarray[i] == "to") 
                            toinside = i;
                        if (codearray[i] == ";") 
                            twosemi++;
                        if (firstfound == 0 && codearray[i] == "=") 
                            firstfound = i-1;
                    } //next
                    if (toinside > 0 && twosemi < 2) {
                        for  ( int i = 1; i < toinside; i++ ) {
                            if (codearray[i+1] == "." || codearray[i] == "." || codearray[i+1] == "(" || codearray[i] == ")" || codearray[i+1] == "[" || codearray[i] == "]") {
                                dummy = dummy + codearray[i];
                            }
                            else {
                                dummy = dummy + codearray[i] + " ";
                            } //endif
                        } //next
                        cppline = "for (" + dummy + ";";
                        if (lowarray[anzarray-1] == "-" && lowarray[anzarray] == "1") {
                            dummy.clear();
                            for  ( int i = toinside+1; i < anzarray-1; i++ ) {
                                if (codearray[i+1] == "." || codearray[i] == "." || codearray[i+1] == "(" || codearray[i] == ")" || codearray[i+1] == "[" || codearray[i] == "]") {
                                    dummy = dummy + codearray[i];
                                }
                                else {
                                    dummy = dummy + codearray[i] + " ";
                                } //endif
                            } //next
                            cppline = cppline + codearray[firstfound] + " < " + dummy + "; " + codearray[firstfound] +"++ ) {";
                        }
                        else {
                            dummy.clear();
                            for  ( int i = toinside+1; i <= anzarray; i++ ) {
                                if (codearray[i+1] == "." || codearray[i] == "." || codearray[i+1] == "(" || codearray[i] == ")" || codearray[i+1] == "[" || codearray[i] == "]") {
                                    dummy = dummy + codearray[i];
                                }
                                else {
                                    dummy = dummy + codearray[i] + " ";
                                } //endif
                            } //next
                            cppline = cppline + codearray[firstfound] + " <= " + dummy + "; " + codearray[firstfound] +"++ ) {";
                        } //endif
                    }
                    else if (twosemi > 1){
                        if (endklammer == 1) {
                            cppline = "for (" + theline.substr( 3 ) + ") {";
                        }
                        else {
                            //cppline = "for " + theline.substr( 3 ) + ") {"
                            cppline = "for " + theline.substr( 3 ) + " {";
                        } //endif
                    }
                    else {
                        // FEHLER
                    } //endif
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + cppline;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    //EndFold-              // ######################## For  Ende #####################################
                    //Fold+          // ++++++++++++++++++++++++ Else If  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "else" && lowarray[1] == "if"){
                    endklammer = 0;
                    Einzug = Einzug - 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    if (codearray[2] != "(") {
                        endklammer = 1;
                        cppline = "}\n" +EinzugStr+ "else if (";
                        startarray = 2;
                    }
                    else {
                        cppline = "}\n" +EinzugStr+ "else if ";
                        startarray = 2;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (codearray[i] == "=") {
                            codearray[i] = " == ";
                        }
                        else if (codearray[i] == "=="){
                            codearray[i] = " = ";
                        }
                        else if (codearray[i] == ","){
                            codearray[i] = " , ";
                        }
                        else if (codearray[i] == ";"){
                            codearray[i] = " ; ";
                        }
                        else if (codearray[i] == "!="){
                            codearray[i] = " != ";
                        }
                        else if (codearray[i] == "<"){
                            codearray[i] = " < ";
                        }
                        else if (codearray[i] == ">"){
                            codearray[i] = " > ";
                        }
                        else if (codearray[i] == "<="){
                            codearray[i] = " <= ";
                        }
                        else if (codearray[i] == ">="){
                            codearray[i] = " >= ";
                        }
                        else if (codearray[i] == "*="){
                            codearray[i] = " *= ";
                        }
                        else if (codearray[i] == "/="){
                            codearray[i] = " /= ";
                        }
                        else if (codearray[i] == "-="){
                            codearray[i] = " -= ";
                        }
                        else if (codearray[i] == "+="){
                            codearray[i] = " += ";
                        }
                        else if (codearray[i] == "||"){
                            codearray[i] = " || ";
                        }
                        else if (codearray[i] == "&&"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "or"){
                            codearray[i] = " || ";
                        }
                        else if (lowarray[i] == "and"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "bitor"){
                            codearray[i] = " | ";
                        }
                        else if (lowarray[i] == "bitand"){
                            codearray[i] = " & ";
                        }
                        else if (lowarray[i] == "not"){
                            codearray[i] = " !";
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ") {";
                    }
                    else {
                        cppline = cppline + "{";
                    } //endif
                    cppline = EinzugStr + cppline;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ ElseIf  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "elseif"){
                    endklammer = 0;
                    Einzug = Einzug - 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    if (codearray[1] != "(") {
                        endklammer = 1;
                        cppline = "}\n" +EinzugStr+ "else if (";
                        startarray = 1;
                    }
                    else {
                        cppline = "}\n" +EinzugStr+ "else if ";
                        startarray = 1;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (codearray[i] == "=") {
                            codearray[i] = " == ";
                        }
                        else if (codearray[i] == "=="){
                            codearray[i] = " = ";
                        }
                        else if (codearray[i] == ","){
                            codearray[i] = " , ";
                        }
                        else if (codearray[i] == ";"){
                            codearray[i] = " ; ";
                        }
                        else if (codearray[i] == "!="){
                            codearray[i] = " != ";
                        }
                        else if (codearray[i] == "<"){
                            codearray[i] = " < ";
                        }
                        else if (codearray[i] == ">"){
                            codearray[i] = " > ";
                        }
                        else if (codearray[i] == "<="){
                            codearray[i] = " <= ";
                        }
                        else if (codearray[i] == ">="){
                            codearray[i] = " >= ";
                        }
                        else if (codearray[i] == "*="){
                            codearray[i] = " *= ";
                        }
                        else if (codearray[i] == "/="){
                            codearray[i] = " /= ";
                        }
                        else if (codearray[i] == "-="){
                            codearray[i] = " -= ";
                        }
                        else if (codearray[i] == "+="){
                            codearray[i] = " += ";
                        }
                        else if (codearray[i] == "||"){
                            codearray[i] = " || ";
                        }
                        else if (codearray[i] == "&&"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "or"){
                            codearray[i] = " || ";
                        }
                        else if (lowarray[i] == "and"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "bitor"){
                            codearray[i] = " | ";
                        }
                        else if (lowarray[i] == "bitand"){
                            codearray[i] = " & ";
                        }
                        else if (lowarray[i] == "not"){
                            codearray[i] = " !";
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ") {";
                    }
                    else {
                        cppline = cppline + "{";
                    } //endif
                    cppline = EinzugStr + cppline;
                    Einzug = Einzug + 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndIf  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "endif"){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //endif";
                    //EndFold-
                    //Fold+			// +++++++++++++++++++++++++ Global +++++++++++++++++++++++++++++++++++++++                            <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "global"){
                    //tempb = lowarray[1].size()
                    if (usebasicvar == 0) {
                        cppline = CutFirstWord( theline );
                    }
                    else {
                        if (lowarray[2] == "#") { // oder lowarray[2]= 35  float #
                            if (lowarray[3] == "") {
                                cppline = "float " + codearray[1];
                            }
                            else {
                                cppline = "float " + codearray[1] + " ";
                                tempb = 3;
                                while (lowarray[tempb] != "") {
                                    if (lowarray[tempb] != "#") {
                                        if (lowarray[tempb+1] == "." || lowarray[tempb] == ".") {
                                            cppline = cppline + codearray[tempb];
                                        }
                                        else {
                                            cppline = cppline + codearray[tempb] + " ";
                                        } //endif
                                    } //endif
                                    tempb++;
                                } //wend
                            } //endif
                        }
                        else if (lowarray[2] == "%") { // oder lowarray[2]= 35  int %
                            if (lowarray[3] == "") {
                                cppline = "int " + codearray[1];
                            }
                            else {
                                cppline = "int " + codearray[1] + " ";
                                tempb = 3;
                                while (lowarray[tempb] != "") {
                                    if (lowarray[tempb] != "%") {
                                        cppline = cppline + codearray[tempb] + " ";
                                    } //endif
                                    tempb++;
                                } //wend
                            } //endif
                        }
                        else if (lowarray[2] == "$") { // oder lowarray[2]= 35  string$
                            if (lowarray[3] == "") {
                                cppline = "string " + codearray[1];
                            }
                            else {
                                cppline = "string " + codearray[1] + " ";
                                tempb = 3;
                                while (lowarray[tempb] != "") {
                                    if (lowarray[tempb] != "$") {
                                        cppline = cppline + codearray[tempb] + " ";
                                    } //endif
                                    tempb++;
                                } //wend
                            } //endif
                        }
                        else {
                            if (lowarray[2] == "") {
                                cppline = "int " + codearray[1];
                            }
                            else {
                                cppline = "int " + codearray[1] + " ";
                                tempb = 2;
                                while (lowarray[tempb] != "") {
                                    if (lowarray[tempb] != "%") {
                                        cppline = cppline + codearray[tempb] + " ";
                                    } //endif
                                    tempb++;
                                } //wend
                            } //endif
                        } //endif
                    } //endif
                    insGlobals = insGlobals + cppline + ";\n";
                    cppline = "";
                    // EinzugStr.assign(Einzug, 32)
                    // cppline = EinzugStr + cppline + ";"
                    //EndFold-
                    //Fold+			 // +++++++++++++++++++++++++ BeginGlobals  / EndGlobals  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "beginglobals"){
                    globalassign = 1;
                    codeout = 4;
                    cppline = "";
                }
                else if (lowarray[0] == "endglobals"){
                    globalassign = 0;
                    codeout = 5;
                    cppline = "";
                    //EndFold-
                    //Fold+			// +++++++++++++++++++++++++ Local +++++++++++++++++++++++++++++++++++++++                            <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "local"){
                    //tempb = lowarray[1].size()
                    if (lowarray[2] == "#") { // oder lowarray[2]= 35  float #
                        if (lowarray[3] == "") {
                            cppline = "float " + codearray[1];
                        }
                        else {
                            cppline = "float " + codearray[1] + " ";
                            tempb = 3;
                            while (lowarray[tempb] != "") {
                                if (lowarray[tempb] != "#") {
                                    if (lowarray[tempb+1] == "." || lowarray[tempb] == ".") {
                                        cppline = cppline + codearray[tempb];
                                    }
                                    else {
                                        cppline = cppline + codearray[tempb] + " ";
                                    } //endif
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else if (lowarray[2] == "%") { // oder lowarray[2]= 35  int %
                        if (lowarray[3] == "") {
                            cppline = "int " + codearray[1];
                        }
                        else {
                            cppline = "int " + codearray[1] + " ";
                            tempb = 3;
                            while (lowarray[tempb] != "") {
                                if (lowarray[tempb] != "%") {
                                    cppline = cppline + codearray[tempb] + " ";
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else if (lowarray[2] == "$") { // oder lowarray[2]= 35  string$
                        if (lowarray[3] == "") {
                            cppline = "string " + codearray[1];
                        }
                        else {
                            cppline = "string " + codearray[1] + " ";
                            tempb = 3;
                            while (lowarray[tempb] != "") {
                                if (lowarray[tempb] != "$") {
                                    cppline = cppline + codearray[tempb] + " ";
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else {
                        if (lowarray[2] == "") {
                            cppline = "int " + codearray[1];
                        }
                        else {
                            cppline = "int " + codearray[1] + " ";
                            tempb = 2;
                            while (lowarray[tempb] != "") {
                                if (lowarray[tempb] != "%") {
                                    cppline = cppline + codearray[tempb] + " ";
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    } //endif
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + cppline + ";";
                    //EndFold-
                    //Fold+			// +++++++++++++++++++++++++ Dim +++++++++++++++++++++++++++++++++++++++                            <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "dim"){
                    //tempb = lowarray[1].size()
                    if (lowarray[2] == "#") { // oder lowarray[2]= 35  float #
                        if (lowarray[3] == "") {
                            cppline = "float " + codearray[1];
                        }
                        else {
                            cppline = "float " + codearray[1]; //+ " "
                            tempb = 3;
                            tempa = 0;
                            while ((lowarray[tempb] != "") | (lowarray[tempb+1] != "")){
                                if (lowarray[tempb] != "#") {
                                    if (lowarray[tempb+1] == "." || lowarray[tempb] == ".") {
                                        cppline = cppline + codearray[tempb];
                                    }
                                    else if (lowarray[tempb] == "(") {
                                        tempa = 99;
                                        cppline = cppline + "[";
                                    }
                                    else if (lowarray[tempb] == ")") {
                                        tempa = 0;
                                        cppline = cppline + "]";
                                    }
                                    else if (lowarray[tempb] == ",") {
                                        if (tempa == 0) {
                                            cppline = cppline + ", ";
                                        }
                                        else if (tempa == 99) {
                                            cppline = cppline + "][";
                                        } //endif
                                    }
                                    else {
                                        cppline = cppline + codearray[tempb]; //+ " "
                                    } //endif
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else if (lowarray[2] == "%") { // oder lowarray[2]= 35  int %
                        if (lowarray[3] == "") {
                            cppline = "int " + codearray[1];
                        }
                        else {
                            cppline = "int " + codearray[1]; //+ " "
                            tempb = 3;
                            tempa = 0;
                            while ((lowarray[tempb] != "") | (lowarray[tempb+1] != "")){
                                if (lowarray[tempb] != "%") {
                                    if (lowarray[tempb] == "(") {
                                        tempa = 99;
                                        cppline = cppline + "[";
                                    }
                                    else if (lowarray[tempb] == ")") {
                                        tempa = 0;
                                        cppline = cppline + "]";
                                    }
                                    else if (lowarray[tempb] == ",") {
                                        if (tempa == 0) {
                                            cppline = cppline + ", ";
                                        }
                                        else if (tempa == 99) {
                                            cppline = cppline + "][";
                                        } //endif
                                    }
                                    else {
                                        cppline = cppline + codearray[tempb]; //+ " "
                                    } //endif
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else if (lowarray[2] == "$") { // oder lowarray[2]= 35  string$
                        if (lowarray[3] == "") {
                            cppline = "string " + codearray[1];
                        }
                        else {
                            cppline = "string " + codearray[1]; //+ " "
                            tempb = 3;
                            tempa = 0;
                            while ((lowarray[tempb] != "") | (lowarray[tempb+1] != "")){
                                if (lowarray[tempb] != "$") {
                                    if (lowarray[tempb] == "(") {
                                        tempa = 99;
                                        cppline = cppline + "[";
                                    }
                                    else if (lowarray[tempb] == ")") {
                                        tempa = 0;
                                        cppline = cppline + "]";
                                    }
                                    else if (lowarray[tempb] == ",") {
                                        if (tempa == 0) {
                                            cppline = cppline + ", ";
                                        }
                                        else if (tempa == 99) {
                                            cppline = cppline + "][";
                                        } //endif
                                    }
                                    else {
                                        cppline = cppline + codearray[tempb]; //+ " "
                                    } //endif
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    }
                    else {
                        if (lowarray[2] == "") {
                            cppline = "int " + codearray[1];
                        }
                        else {
                            cppline = "int " + codearray[1]; //+ " "
                            tempb = 2;
                            tempa = 0;
                            while ((lowarray[tempb] != "") | (lowarray[tempb+1] != "")){
                                if (lowarray[tempb] != "%") {
                                    if (lowarray[tempb] == "(") {
                                        tempa = 99;
                                        cppline = cppline + "[";
                                    }
                                    else if (lowarray[tempb] == ")") {
                                        tempa = 0;
                                        cppline = cppline + "]";
                                    }
                                    else if (lowarray[tempb] == ",") {
                                        if (tempa == 0) {
                                            cppline = cppline + ", ";
                                        }
                                        else if (tempa == 99) {
                                            cppline = cppline + "][";
                                        } //endif
                                    }
                                    else {
                                        cppline = cppline + codearray[tempb]; //+ " "
                                    } //endif
                                } //endif
                                tempb++;
                            } //wend
                        } //endif
                    } //endif
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + cppline + ";";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndMain  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "endmain"){
                    Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //End Main";
                    // IamMain = 3
                    codeout = 3;
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndFunction EndF EndFunc  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "endfunction" || lowarray[0] == "endf" || lowarray[0] == "endfunc"){
                    Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //End Function";
                    codeout = 3; //<<<<<<<<<<<<<<<<<<<<<<<<<<<<< 3 bedeutet nach Ausgabe in Datei wird 3 zu 0
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndBlock  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "endblock"){
                    if (codearray[1] != "") { // && codearray[2] = ":"
                        cppline = "BlockEndLabel" + codearray[1] + ":";
                    } //endif
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndCBlock  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endcblock"){
                    if (codearray[1] != "") {
                        cppline = EinzugStr + "} //end " + lowarray[1] +"\n";
                        cppline = cppline + "BlockEndLabel" + codearray[1] + ":"; //if (codearray[2] = ":") then
                    }
                    else {
                        cppline = EinzugStr + "} //end " + lowarray[1];
                    } //endif
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndClass  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endclass"){
                    // IamClass = 3
                    dummy.clear();
                    dummy = CutFirstWord( theline );
                    cppline = EinzugStr + "}" + dummy + "; // " + codearray[0] + "\n";
                    // IamClass = 3
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndStruct  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endstruct"){
                    // IamClass = 3
                    dummy.clear();
                    dummy = CutFirstWord( theline );
                    cppline = EinzugStr + "}" + dummy + "; // " + codearray[0] + "\n";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndUnion  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endunion"){
                    // IamClass = 3
                    dummy.clear();
                    dummy = CutFirstWord( theline );
                    cppline = EinzugStr + "}" + dummy + "; // " + codearray[0] + "\n";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndNamespace  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endnamespace"){
                    // IamClass = 3
                    dummy.clear();
                    dummy = CutFirstWord( theline );
                    cppline = EinzugStr + "}" + dummy + " // " + codearray[0] + "\n";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ EndType  +++++++++++++++++++++++++++++++++++++++    <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                }
                else if (lowarray[0] == "endtype"){
                    // IamClass = 3
                    dummy.clear();
                    dummy = CutFirstWord( theline );
                    cppline = EinzugStr + "}" + dummy + "; // EndStruct \n";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ End  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "end" && lowarray[1] != ""){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    if (lowarray[1] == "class" || lowarray[1] == "struct" || lowarray[1] == "union" || lowarray[1] == "type" || lowarray[1] == "namespace") {
                        // IamClass = 3
                        dummy.clear();
                        dummy = CutFirstWord( theline );
                        if (dummy != "") {
                            dummy2 = CutFirstWord( dummy );
                        }
                        else {
                            dummy2 = "";
                        } //endif
                        cppline = EinzugStr + "}" + dummy2 + "; //end " + lowarray[1] + "\n";
                    }
                    else if (lowarray[1] == "block"){
                        if (codearray[2] != "") { //&& codearray[3] = ":"
                            cppline = "BlockEndLabel" + codearray[2] + ":";
                        } //endif
                    }
                    else if (lowarray[1] == "cblock"){ //<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< test  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                        if (codearray[2] != "") {
                            cppline = EinzugStr + "} //end " + lowarray[1] +"\n";
                            cppline = cppline + "BlockEndLabel" + codearray[2] + ":"; //if (codearray[3] = ":") then
                        }
                        else {
                            cppline = EinzugStr + "} //end " + lowarray[1];
                        } //endif
                    }
                    else if (lowarray[1] == "function" || lowarray[1] == "func"){
                        cppline = EinzugStr + "} //end " + lowarray[1] + "\n";
                        codeout = 3;
                    }
                    else if (lowarray[1] == "switch"){
                        Einzug -= 4;
                        if (Einzug < 0) 
                            Einzug = 0;
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "} //end " + lowarray[1];
                        what_block[what_block_akt] = 0;
                        --what_block_akt;
                    }
                    else if (lowarray[1] == "select"){
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "} //end " + lowarray[1] +"\n";
                        if (what_selectbreak[what_select_akt] == 1) {
                            cppline = cppline + "Select_EndLabel_" +  IntToStr5(what_select[what_select_akt]) + ":";
                            what_selectbreak[what_select_akt] = 0;
                        } //endif
                        what_select[what_select_akt] = 0;
                        --what_select_akt;
                        what_block[what_block_akt] = 0;
                        --what_block_akt;
                    }
                    else if ((lowarray[1] == "global" && lowarray[2] == "area") || lowarray[1] == "globals"){
                        globalassign = 0;
                        codeout = lastcodeout;
                        cppline = "";
                    }
                    else if (lowarray[1] == "main"){
                        Einzug = 0;
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "} //End Main";
                        // IamMain = 3
                        codeout = 3;
                    }
                    else {
                        cppline = EinzugStr + "} //end " + lowarray[1];
                    } //endif
                    //EndFold-
                    //Fold+			 // ++++++++++++++++++++++++ EndSelect ++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "endselect"){
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //EndSelect \n";
                    if (what_selectbreak[what_select_akt] == 1) {
                        cppline = cppline + "Select_EndLabel_" +  IntToStr5(what_select[what_select_akt]) + ":";
                        what_selectbreak[what_select_akt] = 0;
                    } //endif
                    if (what_select_akt > 0) {
                        what_select[what_select_akt] = 0;
                        --what_select_akt;
                    } //endif
                    if (what_block_akt > 0) {
                        what_block[what_block_akt] = 0;
                        --what_block_akt;
                    } //endif
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ Else  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "else"){
                    Einzug = Einzug - 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "}\n" +EinzugStr+ "else {";
                    Einzug = Einzug + 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ Next  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "next"){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //next";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ Wend  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "wend"){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "} //wend";
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ LoopWhile  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "loopwhile"){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    endklammer = 0;
                    if (codearray[1] != "(") {
                        endklammer = 1;
                        cppline = "}\n" + EinzugStr + "while (";
                        startarray = 1;
                    }
                    else {
                        cppline = "}\n" + EinzugStr + "while ";
                        startarray = 1;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (codearray[i] == "=") {
                            codearray[i] = " == ";
                        }
                        else if (codearray[i] == "=="){
                            codearray[i] = " = ";
                        }
                        else if (codearray[i] == ","){
                            codearray[i] = " , ";
                        }
                        else if (codearray[i] == ";"){
                            codearray[i] = " ; ";
                        }
                        else if (codearray[i] == "!="){
                            codearray[i] = " != ";
                        }
                        else if (codearray[i] == "<"){
                            codearray[i] = " < ";
                        }
                        else if (codearray[i] == ">"){
                            codearray[i] = " > ";
                        }
                        else if (codearray[i] == "<="){
                            codearray[i] = " <= ";
                        }
                        else if (codearray[i] == ">="){
                            codearray[i] = " >= ";
                        }
                        else if (codearray[i] == "*="){
                            codearray[i] = " *= ";
                        }
                        else if (codearray[i] == "/="){
                            codearray[i] = " /= ";
                        }
                        else if (codearray[i] == "-="){
                            codearray[i] = " -= ";
                        }
                        else if (codearray[i] == "+="){
                            codearray[i] = " += ";
                        }
                        else if (codearray[i] == "||"){
                            codearray[i] = " || ";
                        }
                        else if (codearray[i] == "&&"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "or"){
                            codearray[i] = " || ";
                        }
                        else if (lowarray[i] == "and"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "bitor"){
                            codearray[i] = " | ";
                        }
                        else if (lowarray[i] == "bitand"){
                            codearray[i] = " & ";
                        }
                        else if (lowarray[i] == "not"){
                            codearray[i] = " !";
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ");";
                    }
                    else {
                        cppline = cppline + ";";
                    } //endif
                    cppline = EinzugStr + cppline;
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ Loop While  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "loop" && lowarray[1] == "while"){
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.assign(Einzug, 32);
                    endklammer = 0;
                    if (codearray[2] != "(") {
                        endklammer = 1;
                        cppline = "}\n" + EinzugStr + "while (";
                        startarray = 2;
                    }
                    else {
                        cppline = "}\n" + EinzugStr + "while ";
                        startarray = 2;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (codearray[i] == "=") {
                            codearray[i] = " == ";
                        }
                        else if (codearray[i] == "=="){
                            codearray[i] = " = ";
                        }
                        else if (codearray[i] == ","){
                            codearray[i] = " , ";
                        }
                        else if (codearray[i] == ";"){
                            codearray[i] = " ; ";
                        }
                        else if (codearray[i] == "!="){
                            codearray[i] = " != ";
                        }
                        else if (codearray[i] == "<"){
                            codearray[i] = " < ";
                        }
                        else if (codearray[i] == ">"){
                            codearray[i] = " > ";
                        }
                        else if (codearray[i] == "<="){
                            codearray[i] = " <= ";
                        }
                        else if (codearray[i] == ">="){
                            codearray[i] = " >= ";
                        }
                        else if (codearray[i] == "*="){
                            codearray[i] = " *= ";
                        }
                        else if (codearray[i] == "/="){
                            codearray[i] = " /= ";
                        }
                        else if (codearray[i] == "-="){
                            codearray[i] = " -= ";
                        }
                        else if (codearray[i] == "+="){
                            codearray[i] = " += ";
                        }
                        else if (codearray[i] == "||"){
                            codearray[i] = " || ";
                        }
                        else if (codearray[i] == "&&"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "or"){
                            codearray[i] = " || ";
                        }
                        else if (lowarray[i] == "and"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "bitor"){
                            codearray[i] = " | ";
                        }
                        else if (lowarray[i] == "bitand"){
                            codearray[i] = " & ";
                        }
                        else if (lowarray[i] == "not"){
                            codearray[i] = " !";
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ");";
                    }
                    else {
                        cppline = cppline + ";";
                    } //endif
                    cppline = EinzugStr + cppline;
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ While  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "while"){
                    endklammer = 0;
                    if (codearray[1] != "(") {
                        endklammer = 1;
                        cppline = "while (";
                        startarray = 1;
                    }
                    else {
                        cppline = "while ";
                        startarray = 1;
                    } //endif
                    for  ( int i=startarray; i <= anzarray; i++ ) {
                        if (codearray[i] == "=") {
                            codearray[i] = " == ";
                        }
                        else if (codearray[i] == "=="){
                            codearray[i] = " = ";
                        }
                        else if (codearray[i] == ","){
                            codearray[i] = " , ";
                        }
                        else if (codearray[i] == ";"){
                            codearray[i] = " ; ";
                        }
                        else if (codearray[i] == "!="){
                            codearray[i] = " != ";
                        }
                        else if (codearray[i] == "<"){
                            codearray[i] = " < ";
                        }
                        else if (codearray[i] == ">"){
                            codearray[i] = " > ";
                        }
                        else if (codearray[i] == "<="){
                            codearray[i] = " <= ";
                        }
                        else if (codearray[i] == ">="){
                            codearray[i] = " >= ";
                        }
                        else if (codearray[i] == "*="){
                            codearray[i] = " *= ";
                        }
                        else if (codearray[i] == "/="){
                            codearray[i] = " /= ";
                        }
                        else if (codearray[i] == "-="){
                            codearray[i] = " -= ";
                        }
                        else if (codearray[i] == "+="){
                            codearray[i] = " += ";
                        }
                        else if (codearray[i] == "||"){
                            codearray[i] = " || ";
                        }
                        else if (codearray[i] == "&&"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "or"){
                            codearray[i] = " || ";
                        }
                        else if (lowarray[i] == "and"){
                            codearray[i] = " && ";
                        }
                        else if (lowarray[i] == "bitor"){
                            codearray[i] = " | ";
                        }
                        else if (lowarray[i] == "bitand"){
                            codearray[i] = " & ";
                        }
                        else if (lowarray[i] == "not"){
                            codearray[i] = " !";
                        } //endif
                        cppline = cppline + codearray[i];
                    } //next
                    if (endklammer == 1) {
                        cppline = cppline + ") {";
                    }
                    else {
                        cppline = cppline + "{";
                    } //endif
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + cppline;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ makeDLL  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "makedll"){
                    dummy2 = DieserPfad;
                    usemakeDLL = 1;
                    // dllinclude = theline.substr(theline.find_first_of(" \t\r\n")+1)
                    // dllinclude = trim(dllinclude)
                    // dummy = lcase(dllinclude)
                    if (lowarray[1] == "blitzbasic" || dummy == "blitz3d") {
                        PRGSTAT = ISBBDLL;
                        PRGopenSTAT = ISBBDLL;
                        dummy = "blitzbasic";
                        if (lowarray[2] == "nofrn" || lowarray[3] == "nofrn") 
                            noreplname = 1;
                        if (lowarray[2] == "pellesc" || lowarray[3] == "pellesc") {
                            thecompiler = 1;
                            cppline = "#include \"" +  cppdeclare  +"\"";
                            // FPrint CppSource,   "#define  _FORCENAMELESSUNION "
                            CppSource <<    "#include <windows.h>         " << endl;
                            CppSource <<    "#include <windowsx.h>        " << endl;
                            CppSource <<    "#include <commctrl.h>        " << endl;
                            CppSource <<    "#include <mmsystem.h>        " << endl;
                            CppSource <<    "#include <shellapi.h>        " << endl;
                            CppSource <<    "#include <shlobj.h>          " << endl;
                            CppSource <<    "#include <richedit.h>        " << endl;
                            CppSource <<    "#include <wchar.h>           " << endl;
                            CppSource <<    "#include <objbase.h>         " << endl;
                            CppSource <<    "#include <ocidl.h>           " << endl;
                            CppSource <<    "#include <winuser.h>         " << endl;
                            CppSource <<    "#include <conio.h>           " << endl;
                            CppSource <<    "#include <direct.h>          " << endl;
                            CppSource <<    "#include <ctype.h>           " << endl;
                            CppSource <<    "#include <io.h>              " << endl;
                            CppSource <<    "#include <math.h>            " << endl;
                            CppSource <<    "#include <stdio.h>           " << endl;
                            CppSource <<    "#include <string.h>          " << endl;
                            CppSource <<    "#include <stddef.h>          " << endl;
                            CppSource <<    "#include <stdlib.h>          " << endl;
                            CppSource <<    "#include <setjmp.h>          " << endl;
                            CppSource <<    "#include <time.h>            " << endl;
                            CppSource <<    "#include <stdarg.h>          " << endl;
                            CppSource <<    "#include <process.h>         " << endl;
                        }
                        else {
                            dummy2 = dummy2 + "dirtyDLLparts\\"  + lowarray[1] + "_incl.h";
                            InsertFile( dummy2, CppSource );
                            cppline = "#include \"" +  cppdeclare  +"\"";
                        } //endif
                    }
                    else {
                        PRGSTAT = ISDLL;
                        dummy2 = dummy2 + "dirtyDLLparts\\"  + lowarray[1] + "_incl.h";
                        InsertFile( dummy2, CppSource );
                        cppline = "#include \"" +  cppdeclare  +"\"";
                    } //endif
                    //                    dummy2 = dummy2 + "dirtyDLLparts\\"  + lowarray[1] + "_incl.h"
                    //                    InsertFile( dummy2, CppSource )
                    //                    //dummy2 = "\"dirtyDLLparts\\"  + dllinclude + ".h\"\n\n"
                    //                    //cppline = "#include "  + dummy2
                    //                    cppline = ""
                    //EndFold-
                    //Fold+          // ++++++++++++++++++++++++ Function  +++++++++++++++++++++++++++++++++++++++
                }
                else if (lowarray[0] == "function" || lowarray[0] == "func"){
                    codeout = 0;
                    Einzug = 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    firstfound = 0;
                    tempa = theline.length();
                    // ###########  BlitzBasic DLL ###############
                    if (PRGSTAT == ISBBDLL) {
                        //                        dummy.clear()
                        //                        for ( int i=0; i < tempa; i++ )
                        //                            if ( firstfound > 0 )
                        //                                 dummy = dummy + theline[i]
                        //                            else if (theline[i] < 33 )
                        //                                firstfound = i
                        //                            EndIf
                        //                        Next
                        //                        dummy = trim(dummy)
                        dummy = CutFirstWord( theline );
                        //                        tempa = dummy.length()
                        //                        firstfound = 0
                        //                        for ( int i=0; i < tempa; i++ )
                        //                            if ( firstfound > 0 )
                        //                                 cppline = cppline + dummy[i]
                        //                            else if (dummy[i] < 33 )
                        //                                firstfound = i
                        //                            EndIf
                        //                        Next
                        //
                        //                        cppline = trim( cppline )
                        cppline = CutFirstWord( dummy );
                        if (cppline[0] == '*') 
                            cppline = cppline.substr(1);
                        if (lowarray[2] == "*") {
                            if (thecompiler == 1) {
                                DeclareFile <<  codearray[1] + "*  __declspec(dllexport) __stdcall " + cppline + ";" << endl;
                                cppline = codearray[1] + "*  __declspec(dllexport) __stdcall " + cppline + " {";
                            }
                            else {
                                DeclareFile <<  "BBEXP " + codearray[1] + "* CALLBACK " + cppline + ";" << endl;
                                cppline = "BBEXP " + codearray[1] + "* CALLBACK " + cppline + " {";
                            } //endif
                        }
                        else {
                            if (thecompiler == 1) {
                                DeclareFile <<  codearray[1] + " __declspec(dllexport) __stdcall " + cppline + ";" << endl;
                                cppline = codearray[1] + " __declspec(dllexport) __stdcall " + cppline + " {";
                            }
                            else {
                                DeclareFile <<  "BBEXP " + codearray[1] + " CALLBACK " + cppline + ";" << endl;
                                cppline = "BBEXP " + codearray[1] + " CALLBACK " + cppline + " {";
                            } //endif
                        } //endif
                        FuncFile  <<  endl;
                        dummy.clear();
                        tempa = 0;
                        if (lowarray[1] == "int") {
                            if (lowarray[2] == "*") {
                                dummy =  codearray[3] + "%";
                                dummy2 =  codearray[3];
                            }
                            else {
                                dummy =  codearray[2] + "%";
                                dummy2 =  codearray[2];
                            } //endif
                        }
                        else if (lowarray[1] == "char") {
                            if (lowarray[2] == "*") {
                                dummy =  codearray[3] + "$";
                                dummy2 =  codearray[3];
                            }
                            else {
                                dummy =  codearray[2] + "%";
                                dummy2 =  codearray[2];
                            } //endif
                        }
                        else if (lowarray[1] == "float") {
                            if (lowarray[2] == "*") {
                                dummy =  codearray[3] + "%";
                                dummy2 =  codearray[3];
                            }
                            else {
                                dummy =  codearray[2] + "#";
                                dummy2 =  codearray[2];
                            } //endif
                        }
                        else if (lowarray[1] == "void") {
                            if (lowarray[2] == "*") {
                                dummy =  codearray[3] + "%";
                                dummy2 =  codearray[3];
                            }
                            else {
                                dummy =  codearray[2];
                                dummy2 =  codearray[2];
                            } //endif
                        } //endif
                        dummy = dummy + "( ";
                        for (int i = 2 ;i <= anzarray ; i++ ) {
                            if ((lowarray[i] == "(" || lowarray[i] == ",") && tempa < 2) {
                                if (lowarray[i] == "(") 
                                    tempa++;
                                if (lowarray[i] == ",") 
                                    dummy = dummy + ", ";
                                //dummy = dummy + lowarray[i] + " "
                                if (lowarray[i+1] == ")") {
                                    continue;
                                } //endif
                                if (lowarray[i+2] == ")") {
                                    i++;
                                    continue;
                                } //endif
                                if (lowarray[i+1] == "const") 
                                    i++;
                                if (lowarray[i+1] == "int") {
                                    if (lowarray[i+2] == "*") {
                                        dummy = dummy +  codearray[i+3] + "*";
                                    }
                                    else {
                                        dummy = dummy +  codearray[i+2] + "%";
                                    } //endif
                                }
                                else if (lowarray[i+1] == "char") {
                                    if (lowarray[i+2] == "*") {
                                        dummy = dummy +  codearray[i+3] + "$";
                                    }
                                    else {
                                        dummy = dummy +  codearray[i+2] + "%";
                                    } //endif
                                }
                                else if (lowarray[i+1] == "float") {
                                    if (lowarray[i+2] == "*") {
                                        dummy = dummy + codearray[i+3] + "*";
                                    }
                                    else {
                                        dummy = dummy +  codearray[i+2] + "#";
                                    } //endif
                                }
                                else if (lowarray[i+1] == "void") {
                                    if (lowarray[i+2] == "*") {
                                        dummy = dummy + codearray[i+3] + "*";
                                    }
                                    else {
                                        dummy = dummy +  codearray[i+2] + "*";
                                    } //endif
                                }
                                else {
                                    if (lowarray[i+2] == "*") {
                                        dummy = dummy + codearray[i+3] + "*";
                                    }
                                    else {
                                        dummy = dummy +  codearray[i+2];
                                    } //endif
                                } //endif
                                //Print dummy + " i " + lowarray[i] + " +1 "  + lowarray[i+1] + " +2 " + lowarray[i+2] + " +3 " + lowarray[i+3]
                            }
                            else if (lowarray[i] == ")") {
                                tempa--;
                                if (tempa == 0) {
                                    if (noreplname == 0) {
                                        dummy = dummy + " ) : \"" +  purePrgName + "_" + dummy2 +"\"";
                                    }
                                    else {
                                        dummy = dummy + " )";
                                    } //endif
                                } //endif
                            } //endif
                        } //next
                        declsfile <<  dummy << endl;
                        // Normale Programme
                    }
                    else {
                        //                        for ( int i=0; i < tempa; i++ )
                        //                            if ( firstfound > 0 )
                        //                                 cppline = cppline + theline[i]
                        //
                        //                            else if (theline[i] < 33 )
                        //                                firstfound = i
                        //                            EndIf
                        //                        Next
                        //                        cppline = trim( cppline )
                        cppline = CutFirstWord( theline );
                        dummy = cppline;
                        found1=dummy.find('=');
BlockStartLabelFindDefault:
                        if (found1 != string::npos) {
                            found = dummy.find(',',found1);
                            if (found != string::npos) {
                                dummy.erase(found1, found-found1);
                                found1=dummy.find('=', found1);
                                goto BlockStartLabelFindDefault;
                            }
                            else {
                                found = dummy.find(')',found1);
                                if (found != string::npos) {
                                    dummy.erase(found1, found-found1);
                                } //endif
                            } //endif
                        } //endif
                    //FindDefault
                    if (lowarray[2] != "main") {
                        DeclareFile << dummy << ";" << endl;
                        // declCounter++
                    } //endif
                    cppline = cppline + " {";
                    FuncFile  <<  endl;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Memberfunction  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "memberfunction" || lowarray[0] == "mfunction" || lowarray[0] == "mfunc"){
                firstfound = 0;
                tempa = theline.length();
                for  ( int i=0; i < tempa; i++ ) {
                    if (firstfound > 0) {
                        cppline = cppline + theline[i];
                    }
                    else if (theline[i] < 33){
                        firstfound = i;
                    } //endif
                } //next
                EinzugStr.assign(Einzug, 32);
                cppline = trim( cppline );
                cppline = EinzugStr + cppline + " {";
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Class / Struct / Union / Namespace  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "class" || lowarray[0] == "struct" || lowarray[0] == "union" || lowarray[0] == "namespace" || lowarray[0] == "type"){
                // IamClass = 1
                Einzug = 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                dummy = CutFirstWord ( theline );
                if (lowarray[0] == "type") {
                    lowarray[0] = "struct";
                } //endif
                cppline = lowarray[0] + " " + dummy + " {";
                if (codeout == 1 || lastcodeout == 1) {
                    CppSource   << endl;
                }
                else if (codeout == 0 || lastcodeout == 0) {
                    // Function Sammelfile output hier   <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<
                    FuncFile <<  endl;
                }
                else {
                    cout  <<  "codeout problem class" << endl;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Do  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "do"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline =  EinzugStr + "do {";
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Method  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "method"){
                //                   firstfound = 0
                //                   tempa = theline.length()
                //
                //                   for ( int i=0; i < tempa; i++ )
                //                       if ( firstfound > 0 )
                //                            cppline = cppline + theline[i]
                //
                //                       else if (theline[i] < 33 )
                //                           firstfound = i
                //                       EndIf
                //                   Next
                //cppline = trim( cppline )
                dummy = CutFirstWord( theline );
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                if (dummy[dummy.size()-1] != '}') {
                    cppline = EinzugStr + dummy + ";";
                }
                else {
                    cppline = EinzugStr + dummy;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ iMethod  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "imethod"){
                firstfound = 0;
                tempa = theline.length();
                for  ( int i=0; i < tempa; i++ ) {
                    if (firstfound > 0) {
                        cppline = cppline + theline[i];
                    }
                    else if (theline[i] < 33){
                        firstfound = i;
                    } //endif
                } //next
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline = trim( cppline );
                cppline = EinzugStr + cppline + " {;}";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ CreateObject +++++++++++++++++++++++++++++++++++++++
                // Instanzbildung, geht auch ohne CreateObject (optional)
            }
            else if (lowarray[0] == "createobject"){
                firstfound = 0;
                //                   tempa = theline.length()
                //
                //                   for ( int i=0; i < tempa; i++ )
                //                       if ( firstfound > 0 )
                //                            cppline = cppline + theline[i]
                //
                //                       else if (theline[i] < 33 )
                //                           firstfound = i
                //                       EndIf
                //                   Next
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                dummy = CutFirstWord( theline );
                cppline = EinzugStr + dummy + ";";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ NewArrayObject +++++++++++++++++++++++++++++++++++++++
                // newArrayObject ClassName MyObjectName 10   // 10 = Number of Arrays   // NewAO   ClassName MyObjectName 10
                // ergibt
                // ClassnName* MyObjectName = new ClassName[10];
            }
            else if (lowarray[0] == "newarrayobject" || lowarray[0] == "newao"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline = EinzugStr +  codearray[1] + "* " + codearray[2] + " = new " + codearray[1] +"[" + codearray[3] + "];";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DeleteArrayObject +++++++++++++++++++++++++++++++++++++++
                // DeleteArrayObject  MyObjectName     // DelAO  MyObjectName
                // ergibt
                // delete[] MyObjectName;
            }
            else if (lowarray[0] == "deletearrayobject" || lowarray[0] == "delao"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline = EinzugStr +  "delete[] " + codearray[1] + ";";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Template  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "template"){
                cppline = EinzugStr + cppline;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Repeat  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "repeat"){
                what_repeat_max++;
                what_repeat_akt++;
                what_repeat[what_repeat_akt] = what_repeat_max;
                what_repeatbreak[what_repeat_akt] = 0; //
                //repeatarray[what_repeat_akt] = codearray[1]
                // kein Punkt nötig!!
                cppline = "Repeat_StartLabel_" +  IntToStr5(what_repeat_max) + ":";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Until  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "until"){
                endklammer = 0;
                if (codearray[1] != "(") {
                    endklammer = 1;
                    cppline = "if (";
                    startarray = 1;
                }
                else {
                    cppline = "if ";
                    startarray = 1;
                } //endif
                for  ( int i=startarray; i <= anzarray; i++ ) {
                    if (codearray[i] == "=") {
                        codearray[i] = " == ";
                    }
                    else if (codearray[i] == "=="){
                        codearray[i] = " = ";
                    }
                    else if (codearray[i] == ","){
                        codearray[i] = " , ";
                    }
                    else if (codearray[i] == ";"){
                        codearray[i] = " ; ";
                    }
                    else if (codearray[i] == "!="){
                        codearray[i] = " != ";
                    }
                    else if (codearray[i] == "<"){
                        codearray[i] = " < ";
                    }
                    else if (codearray[i] == ">"){
                        codearray[i] = " > ";
                    }
                    else if (codearray[i] == "<="){
                        codearray[i] = " <= ";
                    }
                    else if (codearray[i] == ">="){
                        codearray[i] = " >= ";
                    }
                    else if (codearray[i] == "*="){
                        codearray[i] = " *= ";
                    }
                    else if (codearray[i] == "/="){
                        codearray[i] = " /= ";
                    }
                    else if (codearray[i] == "-="){
                        codearray[i] = " -= ";
                    }
                    else if (codearray[i] == "+="){
                        codearray[i] = " += ";
                    }
                    else if (codearray[i] == "||"){
                        codearray[i] = " || ";
                    }
                    else if (codearray[i] == "&&"){
                        codearray[i] = " && ";
                    }
                    else if (lowarray[i] == "or"){
                        codearray[i] = " || ";
                    }
                    else if (lowarray[i] == "and"){
                        codearray[i] = " && ";
                    }
                    else if (lowarray[i] == "bitor"){
                        codearray[i] = " | ";
                    }
                    else if (lowarray[i] == "bitand"){
                        codearray[i] = " & ";
                    }
                    else if (lowarray[i] == "not"){
                        codearray[i] = " !";
                    } //endif
                    cppline = cppline + codearray[i];
                } //next
                if (endklammer == 1) {
                    cppline = cppline + ") {";
                }
                else {
                    cppline = cppline + "{";
                } //endif
                EinzugStr.assign(Einzug, 32);
                cppline = EinzugStr + cppline + "\n";
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline =  cppline + EinzugStr + "\n";
                cppline =  cppline + EinzugStr + "}\n";
                Einzug = Einzug - 4;
                EinzugStr.clear();
                if (Einzug < 0) 
                    Einzug = 0;
                EinzugStr.assign(Einzug, 32);
                cppline = cppline + EinzugStr + "else {\n";
                Einzug = Einzug + 4;
                EinzugStr.assign(Einzug, 32);
                cppline =  cppline + EinzugStr + "goto Repeat_StartLabel_" +  IntToStr5(what_repeat[what_repeat_akt]) + ";\n";
                cppline =  cppline + EinzugStr + "}\n";
                if (what_repeatbreak[what_repeat_akt] == 1) {
                    cppline = cppline + "Repeat_EndLabel_" +  IntToStr5(what_repeat[what_repeat_akt]) + ":";
                    what_repeatbreak[what_repeat_akt] = 0;
                } //endif
                if (what_repeat_akt > 0) {
                    what_repeat[what_repeat_akt] = 0;
                    --what_repeat_akt;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Select  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "select"){
                what_select_max++;
                what_select_akt++;
                what_select[what_select_akt] = what_select_max;
                if (codearray[1] == ":") {
                    selectarray[what_select_akt] = codearray[2];
                }
                else {
                    selectarray[what_select_akt] = codearray[1];
                } //endif
                if (codearray[1] == ":") {
                    cppline = "Select_StartLabel_" +  IntToStr5(what_select_max) + ":";
                } //endif
                //cppline = ""
                what_block_akt++;
                what_block[what_block_akt] = 2;
                scaselevel = 0;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Switch  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "switch"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                //anzarray = CommaTokenStringArrays(theline, lowarray, codearray, MAXCODEARRAY)
                cppline = EinzugStr + "switch (" + theline.substr( 6 ) + ") {";
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                caselevel = 0;
                what_block_akt++;
                what_block[what_block_akt] = 1;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Case  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "case"){
                if (what_block[what_block_akt] == 1) {
                    if (caselevel == 1) {
                        Einzug -= 4;
                        if (Einzug < 0) 
                            Einzug = 0;
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline =  EinzugStr + theline + ":";
                    }
                    else {
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + theline + ":";
                    } //endif
                    caselevel = 1;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                }
                else if (what_block[what_block_akt] == 2) {
                    if (scaselevel == 1) {
                        Einzug -= 4;
                        if (Einzug < 0) 
                            Einzug = 0;
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "}" + "\n" + EinzugStr + "else if (" + selectarray[what_select_akt] + " == " + codearray[1] + ") {";
                    }
                    else {
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "if (" + selectarray[what_select_akt] + " == " + codearray[1] + ") {";
                    } //endif
                    scaselevel = 1;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Default  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "default"){
                if (what_block[what_block_akt] == 1) {
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline =  EinzugStr +  "default:";
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                }
                else if (what_block[what_block_akt] == 2) {
                    Einzug -= 4;
                    if (Einzug < 0) 
                        Einzug = 0;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "}\n";
                    cppline = cppline + EinzugStr + "else {";
                    scaselevel = 1;
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Print  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "print"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                anzarray = CommaTokenStringArrays(theline, lowarray, codearray, MAXCODEARRAY);
                cppline = EinzugStr + "cout ";
                for  ( int i=0; i <= anzarray; i++ ) {
                    codearray[i] = trim(codearray[i]);
                    if (i == 0) 
                        codearray[i] = codearray[i].substr( 5 );
                    if (codearray[i] != "") {
                        cppline = cppline + " << " + codearray[i];
                    } //endif
                } //next
                cppline = cppline + " << endl;";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ FPrint  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "fprint"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                anzarray = CommaTokenStringArrays(theline, lowarray, codearray, MAXCODEARRAY);
                codearray[0] = trim(codearray[0]);
                cppline = EinzugStr;
                cppline = cppline + trim(codearray[0].erase( 0,6 ));
                for   ( int i=1; i <= anzarray; i++ ) {
                    if (codearray[i] != "") {
                        cppline = cppline + " << " + codearray[i];
                    } //endif
                } //next
                cppline = cppline + " << endl;";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Dout / DebugOut  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "dout" || lowarray[0] == "debugout"){
                if (var_debugset == 1 && var_debugtemp == 1) {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    dummy3 = trim(lowarray[1]);
                    dummy = CutFirstWord ( theline );
                    tempb = 0;
                    if (dummy3 != "main" || debuggroup[0] == "all") {
                        for  (tempc = 0 ;tempc <= 100 ; tempc++ ) {
                            if (debuggroup[tempc] == "") {
                                break;
                            }
                            else if (debuggroup[tempc] == dummy3){
                                tempb = 1;
                                break;
                            } //endif
                        } //next
                    }
                    else {
                        tempb = 1;
                    } //endif
                    if (tempb == 1) {
                        anzarray = CommaTokenStringArrays(dummy, lowarray, codearray, MAXCODEARRAY);
                        if (var_debugmode == 1) {
                            codearray[0] = "cout";
                        }
                        else if (var_debugmode == 2){
                            codearray[0] = "debugOutStream";
                        } //endif
                        cppline = EinzugStr + codearray[0];
                        for  ( int i=1; i <= anzarray; i++ ) {
                            if (codearray[i] != "") {
                                cppline = cppline + " << " + codearray[i];
                            } //endif
                        } //next
                        cppline = cppline + " << endl;";
                    }
                    else {
                        cppline = "";
                    } //endif
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugOpen  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debugopen"){
                //var_debugmode 1 = cout 2 = filestream und zeigt an ob geöffnet wurde.
                // var_debugset ist debugging an ? 1= an      DebugQuiet 1 setzt es auf aus = 0.
                // var_debugtemp an /aus  temporär für DebugOn und DebugOff  an = 1
                tempd = 0;
                if (var_debugset == 1) {
                    if (lowarray[1] == "cout") {
                        var_debugmode = 1; //
                    }
                    else if (lowarray[1] != ""){
                        dummy = lowarray[1];
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline = EinzugStr + "ofstream debugOutStream(" + lowarray[1] +", ifstream::out); \n";
                        var_debugmode = 2;
                    } //endif
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugClose  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debugclose"){
                if (var_debugmode == 2) {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "debugOutStream.close();\n";
                } //endif
                var_debugset = 0;
                var_debugtemp = 0;
                var_debugmode = 0;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugUse  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debuguse"){
                for  (tempb = 0 ;tempb <= 100 ; tempb++ ) {
                    if (debuggroup[tempb] == "") {
                        break;
                    }
                    else {
                        debuggroup[tempb] = "";
                    } //endif
                } //next
                if (lowarray[1] == "all") {
                    debuggroup[0] = "all";
                }
                else {
                    dummy2 = CutFirstWord( theline );
                    anzarray = CommaTokenStringArrays(dummy2, lowarray, codearray, MAXCODEARRAY);
                    for  (tempb = 0 ;tempb <= 100 ; tempb++ ) {
                        if (lowarray[tempb] == "") {
                            break;
                        }
                        else {
                            debuggroup[tempb] = trim(lowarray[tempb]);
                        } //endif
                    } //next
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugOff  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debugoff"){
                var_debugtemp = 0;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugOn  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debugon"){
                var_debugtemp = 1;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DebugQuiet  1/0 = on or off +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "debugquiet"){
                if (codearray[1] == "0") {
                    var_debugset = 1;
                }
                else if (codearray[1] == "1"){
                    var_debugset = 0;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ LPrint  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "lprint"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                anzarray = CommaTokenStringArrays(theline, lowarray, codearray, MAXCODEARRAY);
                cppline = EinzugStr + "cout ";
                for  ( int i=0; i <= anzarray; i++ ) {
                    codearray[i] = trim(codearray[i]);
                    if (i == 0) 
                        codearray[i] = codearray[i].substr( 5 );
                    cppline = cppline + " << " + codearray[i] + " << endl";
                } //next
                cppline = cppline + ";";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ AutoVersion  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "autoversion"){
                // autoversion variable  -------  autoversion variable = 100
                // string autovFile = ""
                // int autoversCode[200]
                // string autoversStore[200]
                // int aktAutoVers = 0
                // int useAutovStore = 0
                // int isAVinOpen = 0
                // int isAVoutOpen = 0
                // size_t foundpos
                // ifstream AVinFile
                // ofstream AVoutFile
                if (lowarray[1] == "include") {
                    // AutoVersion include "Path/Filename.dirtyav"
                    if (lowarray[2] == "=" && lowarray[3] != "") {
                        dummy3 = lowarray[3];
                        lowarray[3].erase(lowarray[3].begin(), lowarray[3].begin()+1);
                        lowarray[3].erase(lowarray[3].end()-1, lowarray[3].end());
                        autovFile = lowarray[3];
                    }
                    else if (lowarray[2] != ""){
                        lowarray[2].erase(lowarray[2].begin(), lowarray[2].begin()+1);
                        lowarray[2].erase(lowarray[2].end()-1, lowarray[2].end());
                        autovFile = lowarray[2];
                    } //endif
                    if (autovFile != "") {
                        // Nachsehen ob file existiert
                        // foundpos=autovFile.rfind(".autoav")
                        // if (string::npos = foundpos) Then autovFile += ".autoav"
                        avFile = autovFile;
                        AVinFile.open(avFile.c_str(), ifstream::in);
                        if (AVinFile) {
                            //wenn ja dann autoversStore[200] Variablen einlesen
                            isAVinOpen = 1; //not really used yet
                            countAV = 0;
                            while (!AVinFile.eof() || countAV == 199){
                                getline(AVinFile,dummy3);
                                dummy3 = trim(dummy3);
                                if (dummy3 != "") {
                                    dummy = CutFirstWord(dummy3 );
                                    dummy2 = ReplaceAll(dummy, "=", "");
                                    dummy = trim(dummy2);
                                    autoversCode[countAV] = StrToInt(dummy);
                                    autoversStore[countAV] = GetFirstWord(dummy3 );
                                    autoversStore[countAV] = trim(autoversStore[countAV]);
                                    if (autoversStore[countAV] != "") 
                                        countAV++;
                                } //endif
                            } //wend
                            useAutovStore = 1;
                            AVinFile.close();
                            isAVinOpen = 0; //not really used yet
                        }
                        else {
                            useAutovStore = 0;
                        } //endif
                        //wenn nein dann useAutovStore = 0 und AutoVersion von code benutzen autoversCode[200] und in Datei schreiben (vorher erstellen)
                        //else
                        // avfile hat standard filename vom Main-codefile erhalten.
                    } //endif
                }
                else {
                    //AutoVersion var = 0 rewrite
                    if (lowarray[2] != "=") 
                        lowarray[3] = "0";
                    if (lowarray[4] == "rewrite") {
                        // tempb = StrToInt(lowarray[3])
                        // tempb++
                        // dummy = IntToStr(tempb)
                        cppline = "int " + codearray[1] + " = " + lowarray[3] + ";";
                        if (countAV > 0 && useAutovStore == 1) {
                            for  (avc = 0 ;avc < countAV ; avc++ ) {
                                if (codearray[1] == autoversStore[avc]) {
                                    autoversCode[avc] = StrToInt(lowarray[3]);
                                    break;
                                } //endif
                            } //next
                        }
                        else {
                            autoversStore[countAV] = codearray[1];
                            autoversCode[countAV] = StrToInt(lowarray[3]);
                            countAV++;
                        } //endif
                    }
                    else if (useAutovStore == 1 && countAV > 0){
                        // inc AutoVerion var
                        tempa = 0;
                        for  (avc = 0 ;avc < countAV ; avc++ ) {
                            if (codearray[1] == autoversStore[avc]) {
                                autoversCode[avc]++;
                                cppline = "int " + codearray[1] + " = " + IntToStr(autoversCode[avc] ) +";";
                                tempa = 1;
                                break;
                            } //endif
                        } //next
                        if (tempa == 0) {
                            cppline = "int " + codearray[1] + " = " + lowarray[3] + ";";
                            autoversStore[countAV] = codearray[1];
                            autoversCode[countAV] = StrToInt(lowarray[3]);
                            countAV++;
                        } //endif
                    }
                    else {
                        // tempb = StrToInt(lowarray[3])
                        // tempb++
                        // dummy = IntToStr(tempb)
                        cppline = "int " + codearray[1] + " = " + lowarray[3] + ";";
                        autoversStore[countAV] = codearray[1];
                        autoversCode[countAV] = StrToInt(lowarray[3]);
                        countAV++;
                    } //endif
                } //endif
                EinzugStr.assign(Einzug, 32);
                if (cppline != "") 
                    cppline = EinzugStr + cppline;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ include  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "include"){
                dummy = "";
                dummy2 = "";
                dummy = CutFirstWord( theline );
                dummy = ReplaceAll(dummy,"\"","");
                dummy = ReplaceAll(dummy,"<","");
                dummy = ReplaceAll(dummy,">","");
                found = dummy.find("<");
                if (found != string::npos) {
                    dummy2 = dummy;
                }
                else {
                    dummy2 = string(PrgPfad) + dummy;
                } //endif
                aktBAScode++;
                BasicSource[aktBAScode] = (new ifstream( dummy2.c_str() ) );
                if (BasicSource[aktBAScode]->good()) {
                    cout  <<  "Include: " << dummy2 << endl;
                }
                else {
                    delete BasicSource[aktBAScode]; // Dyn.Array frei geben.
                    --aktBAScode;
                    cout  <<  "Include failed: " << dummy2 << endl;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ using namespace  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "using" && lowarray[1] == "namespace"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                dummy = CutFirstWord( theline );
                dummy2 = CutFirstWord( dummy );
                cppline = EinzugStr + "using namespace " + dummy2 +";";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ header  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "header"){
                dummy2 = DieserPfad;
                if (lowarray[1] == "" || lowarray[1] == "std") {
                    dummy2 =  dummy2 + "dirtyIncludes\\StdInclude.h";
                    InsertFile( dummy2, CppAll );
                }
                else {
                    dummy = CutFirstWord( theline );
                    dummy = trim(dummy);
                    dummy3 =  dummy2 + "dirtyIncludes\\"  + dummy + ".h";
                    InsertFile( dummy3, CppAll );
                } //endif
                //cppline = "#include \"" +  cppdeclare  +"\""
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ keepcompilefiles  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "keepcompilefiles"){
                if (lowarray[1] == "all") {
                    keepall_flag = 1;
                }
                else {
                    keepdecls_flag = 1;
                } //endif
                //cppline = "#include \"" +  cppdeclare  +"\""
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ CBlock  +++++++++++++++++++++++++++++++++++++++	<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< testen mit Label  und EndBlock Label
            }
            else if (lowarray[0] == "cblock"){
                if (lowarray[1] != "") {
                    cppline = "BlockStartLabel" + codearray[1] + ":\n";
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline =  cppline + EinzugStr + "{";
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                }
                else {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline =  EinzugStr + "{";
                    Einzug += 4;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Begin  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "begin"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline =  EinzugStr + "{";
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Block  +++++++++++++++++++++++++++++++++++++++
                // Block Blockname:  generiert ein Label, sonst nur um einen Block zu markieren für ein EndLabel.
            }
            else if (lowarray[0] == "block"){
                if (codearray[1] != "") {
                    cppline = "BlockStartLabel" + codearray[1] + ":";
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ jumpto  startof block blockname  ../.. jumpto endof cblock cblockname +++++++++++++++++++++++++++++++++++++++  <<<<<<<< test <<<<<<<<
            }
            else if (lowarray[0] == "jumpto"){
                if (lowarray[2] == "block" || lowarray[2] == "cblock") {
                    if (lowarray[1] == "startof") {
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline =  EinzugStr +  "goto BlockStartLabel" + codearray[3] + ";";
                    }
                    else if (lowarray[1] == "endof") {
                        EinzugStr.clear();
                        EinzugStr.assign(Einzug, 32);
                        cppline =  EinzugStr +  "goto BlockEndLabel" + codearray[3] + ";";
                    } //endif
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ continue  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "continue"){
                if (lowarray[1] == "block" || lowarray[1] == "cblock") {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline =  EinzugStr +  "goto BlockStartLabel" + codearray[2] + ";";
                }
                else if (lowarray[1] == "select") {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr +  "goto Select_StartLabel_" +  IntToStr5(what_select[what_select_akt]) + ";\n";
                }
                else if (lowarray[1] == "repeat" || lowarray[1] == "until") {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr +  "goto Repeat_StartLabel_" +  IntToStr5(what_repeat[what_repeat_akt]) + ";\n";
                }
                else {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "continue;";
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ break  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "break"){
                if (lowarray[1] == "block" || lowarray[1] == "cblock") {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline =  EinzugStr +  "goto BlockEndLabel" + codearray[2] + ";";
                }
                else if (lowarray[1] == "select") {
                    what_selectbreak[what_select_akt] = 1;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr +  "goto Select_EndLabel_" +  IntToStr5(what_select[what_select_akt]) + ";\n";
                }
                else if (lowarray[1] == "repeat" || lowarray[1] == "until") {
                    what_repeatbreak[what_repeat_akt] = 1;
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr +  "goto Repeat_EndLabel_" +  IntToStr5(what_repeat[what_repeat_akt]) + ";\n";
                }
                else {
                    EinzugStr.clear();
                    EinzugStr.assign(Einzug, 32);
                    cppline = EinzugStr + "break;";
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ Main  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "main"){
                // IamMain = 1
                codeout = 1;
                Einzug = 0;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                if (lowarray[1] == "cl" || lowarray[1] == "commandline" || lowarray[1] == "console" || lowarray[1] == "arg") {
                    cppline =  EinzugStr + "int main( int argc, char *argv[] ) {";
                }
                else if (lowarray[1] == "nf" || lowarray[1] == "nuclear" || lowarray[1] == "nb" || lowarray[1] == "nuclearfusion") {
                    cppline =  EinzugStr + "void NFCALL AppMain() {";
                }
                else if (lowarray[1] == "win" || lowarray[1] == "winapi") {
                    cppline =  EinzugStr + "int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {";
                }
                else {
                    cppline =  EinzugStr + "int main() {";
                } //endif
                Einzug += 4;
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ return  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "return"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                cppline = EinzugStr +  "return " +  CutFirstWord( theline ) + ";";
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ nocomment  +++++++++++++++++++++++++++++++++++++++
            }
            else if (lowarray[0] == "nocomment"){
                if (lowarray[1] == "semicolon" || codearray[1] == ";") {
                    semkommentar = 0;
                } //endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ basicvar  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
            }
            else if (lowarray[0] == "basicvar"){
                usebasicvar = 1;
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ usemacrolib  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
                // else if  lowarray[0] = "usemacrolib"   or lowarray[0] = "usemlib"
                // if lowarray[1] != ""
                // elseif
                // endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ usefunctionlib  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
                // else if  lowarray[0] = "usefunctionlib"  or lowarray[0] = "useflib"
                // if lowarray[1] != ""
                // elseif
                // endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ useCfunctionlib  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
                // else if  lowarray[0] = "usecfunctionlib"  or lowarray[0] = "useclib"
                // if lowarray[1] != ""
                // elseif
                // endif
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DimArray  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
            }
            else if (lowarray[0] == "dimarray"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                if (FindString(lowarray[2] , "[") > -1 && FindString(lowarray[2] , "]") > -1) {
                    //<<<< grabStringBetween [ ] --- Funktion mid oder sowas.
                    dummy = GetStringBetween( lowarray[2], "[", "]" );
                    dummy2 = GetStringBefore( codearray[2], "[" );
                    // string* testA = new string[50]  ----  wird zu:  ddim string testA[50]
                    cppline = EinzugStr + codearray[1] +" *" + dummy2 + " = new " + codearray[1] + "[" + dummy + "];";
                    // Print "Methode[]"
                }
                else if (lowarray[3] == "(" && lowarray[5] == ")") {
                    cppline = EinzugStr + codearray[1] + " *" + codearray[2] + " = new " + codearray[1] + "[" + codearray[4] + "];";
                    // Print "Methode()"
                } //endif
                // For loopvar = 0 to 5
                // Print codearray[loopvar] , " " , loopvar
                // Print lowarray[loopvar] , " " , loopvar
                // next
                //EndFold-
                //Fold+          // ++++++++++++++++++++++++ DeleteArray  +++++++++++++++++++++++++++++++++++++++
                // To use "Global myfloat# " or "Local myString$"
            }
            else if (lowarray[0] == "deletearray"){
                EinzugStr.clear();
                EinzugStr.assign(Einzug, 32);
                if (lowarray[1] != "") {
                    cppline = EinzugStr + "delete [] " + codearray[1]+ ";";
                } //endif
                //EndFold-
                // ++++++++++++++++++++++++ alles andere hier  +++++++++++++++++++++++++++++++++++++++
                //Fold+  MainLoop - After
            }
            else if (lastchar == ':') {
                // Labels at start of line.
                cppline = theline;
            }
            else if (lastchar == '{' || lastchar == '}') {
                EinzugStr.assign(Einzug, 32);
                cppline = EinzugStr + theline;
            }
            else {
                EinzugStr.assign(Einzug, 32);
                if (lowarray[0] != "") 
                    cppline = EinzugStr + theline + ";";
                //if ( lowarray[0] = "" && comment != "" ) Then  cppline = comment
            } //endif
            //cout << cppline << comment << endl //BasicSource
        }
        else if (modus == CPP){
            if (lowarray[0] == "basic") {
                modus = BASIC;
            }
            else {
                cppline = EinzugStr + theline + comment;
            } //endif
        } //endif
        if (codeout == 4) { // Nur für Global Blöcke, nicht für einzelne Globals.
            if (cppline != "") {
                if (comment != "") {
                    insGlobals = insGlobals + cppline + " " + comment + "\n"; //+ ";\n"
                }
                else {
                    insGlobals = insGlobals + cppline + "\n"; //+ ";\n"
                } //endif
                cppline = "";
            } //endif
            GlobFile  << insGlobals;
            insGlobals = "";
        } //endif
        //---ändern
        // if (IamMain = 0)
        // if (IamClass =1) then codeout=1
        // if (IamClass = 3)
        // codeout=3
        // IamClass = 0
        // endif
        // else if (IamMain > 0)
        // if (IamClass = 3) then IamClass = 0
        // endif
        //------------------------
        //codeout 0 = Main, codeout 1-3 = funktion/all the other
        thatcodeout = 9;
        if (codeout == 1) {
            lastcodeout = 1;
            thatcodeout = 1;
        } //endif
        if (codeout == 0) {
            lastcodeout = 0;
            thatcodeout = 0;
        } //endif
        if (codeout == 3) {
            thatcodeout = lastcodeout;
        } //endif
        if (cppline != "") {
            if (comment != "") {
                if (thatcodeout == 1) {
                    CppSource  << cppline << " " << comment << endl;
                }
                else if (thatcodeout == 0) {
                    // Function file Ausgabe
                    FuncFile << cppline << " " << comment << endl;
                }
                else {
                    cout  <<  "ERROR!!   no codeout" << endl;
                } //endif
            }
            else {
                if (thatcodeout == 1) {
                    CppSource  << cppline  << endl;
                }
                else if (thatcodeout == 0) {
                    // Function file Ausgabe
                    FuncFile  << cppline  << endl;
                }
                else {
                    cout  <<  "ERROR!!   no codeout" << endl;
                } //endif
            } //endif
        }
        else if (comment != ""){
            comment  = EinzugStr + comment;
            if (thatcodeout == 1) {
                CppSource  << comment  << endl;
            }
            else if (thatcodeout == 0) {
                FuncFile  << comment  << endl;
            } //endif
        } //endif
        if (codeout == 3) {
            codeout = 0;
            lastcodeout = 0;
        } //endif
        if (codeout == 5) 
            codeout = lastcodeout;
        if (thenaktiv == 1) {
            Einzug -= 4;
            EinzugStr.assign(Einzug, 32);
            thenaktiv = 0;
        } //endif
    } //wend
    BasicSource[aktBAScode]->close(); //Enthält Filename des aktuell bearbeiteten BasicSources/includefiles und wird hier geschlossen.
    if (aktBAScode > 0) {
        //ReadTextFile  BasicSource[aktBAScode]
        delete BasicSource[aktBAScode]; // Dyn.Array frei geben.
        --aktBAScode;
        goto startread;
    } //endif
    GlobFile  << "// _____ Code generated with Dirty++ 0.4 alpha _____" << endl;
    GlobFile  << insGlobals  << endl;
    CppSource.close();
    DeclareFile.close();
    FuncFile.close();
    GlobFile.close();
    // string prgNameCpp = purePrgName + ".cpp"
    // string prgNameCode = purePrgName + ".code"
    // string prgNameFunc = purePrgName + ".func"
    // string prgNameGlob = purePrgName + ".glob"
    // string declsName = purePrgName + ".decls"
    // string dllName =  purePrgName + ".dll"
    // string cppdeclare = purePrgName + "_decl.h"  << decl.h wird jetzt nicht mehr benötigt.
    // dummy2 =  dummy2 + "dirtyIncludes\\"  + dummy + ".h"
    InsertFile( prgNameGlob, CppAll ); //Globals alle zuerst ( nach Headerfile )
    InsertFile( prgNameFunc, CppAll ); //Funktionen danach (erspart Deklarationen)
    InsertFile( prgNameCode, CppAll ); //Codefile zuletzt.
    CppAll.close();
    //Write to AutoVersion Store-File
    AVoutFile.open(avFile.c_str(), ifstream::out);
    for  (avc = 0 ;avc < countAV ; avc++ ) {
        AVoutFile << autoversStore[avc] << " = " << autoversCode[avc]  << endl;
    } //next
    AVoutFile.close();
    if (PRGSTAT == ISBBDLL) 
        declsfile.close();
}
else {
    cout  <<  "Error !! File could not be opened." << endl;
} //endif
if (keepall_flag == 0) {
    if (remove(prgNameCode.c_str()) != 0) {
        cout  <<  "Error deleting file: " << prgNameCode << endl;
        // else
        // Print  "File ",prgNameCode, " successfully deleted"
    } //endif
    if (remove(prgNameFunc.c_str()) != 0) {
        cout  <<  "Error deleting file: " << prgNameFunc << endl;
        // else
        // Print  "File ",prgNameFunc, " successfully deleted"
    } //endif
    if (remove(prgNameGlob.c_str()) != 0) {
        cout  <<  "Error deleting file: " << prgNameGlob << endl;
        // else
        // Print  "File ",prgNameGlob, " successfully deleted"
    } //endif
    if (keepdecls_flag == 0) {
        if (remove(cppdeclare.c_str()) != 0) {
            cout  <<  "Error deleting file: " << cppdeclare << endl;
            // else
            // Print  "File ",cppdeclare, " successfully deleted"
        } //endif
    } //endif
} //endif
cout  <<  "\n..end" << endl;
//waitkey
} //End Main

