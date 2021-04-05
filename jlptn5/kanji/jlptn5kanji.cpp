#include <iostream>
#include <stdlib.h>
#include <bits/stdc++.h>
std::string word[80]{	//Change this amount to the number of flash cards.
"日 / nichi, jitsu / hi, -bi, -ka",
"一 / ichi / hito(tsu)",
"国 / koku / kuni",
"人 / jin, nin / hito",
"年 / nen / toshi",
"大 / dai, tai / oo(kii)",
"十 / juu / tou, to",
"二 / ni, ji / futa(tsu), futatabi",
"本 / hon / moto",
"中 / chuu / naka, uchi, ata(ru)",
"長 / chou / naga(i), osa",
"出 / shutshu, sui / de*ru), da(su), i(deru)",
"三 / san / mi(tsu)",
"時 / ji / toki, doki",
"行 / kou, gyou, an / i(ku), yu(ku), okana(u)",
"見 / ken / mi(ru), mi(seru)",
"月 / getsu, gatsu / tsuki",
"分 / bun, fun, bu / wa(keru)",
"後 / go, kou / nochi, ushi(ro), ato",
"前 / zen / mae",
"生 / sei, shou / i(kiru), u(mu), o(u), ha(eru), nama",
"五 / go / itsu(tsu)",
"間 / kan, ken / aida, ma, ai",
"上 / jou, shou, shan / ue, uwa, kami, a(geru), nobo(ru), tatematsu(ru)",
"東 / tou / higashi",
"四 / shi / yo(tsu), yon",
"今 / kon, kin / ima",
"金 / kin, kon, gon / kane, kana, gane",
"九 / kyuu, ku / kokono(tsu)",
"入 / nyuu / i(ru), hai(ru)",	
"学 / gaku / mana(bu)",
"高 / kou / taka(i)",
"円 / en / maru(i)",
"子 / shi, su, tsu / ko, ne",
"外 / gai, ge / soto, hoka, hazu-, to-",
"八 / hachi / ya(tsu), you",
"六 / roku / mu(tsu), mui",
"下 / ka, ge / shita, shimo, moto, sa(geru), kuda(ru), o(rosu)",
"来 / rai, tai / kuru, kitaru, ki, ko",
"気 / ki, ke / iki",
"小 / shou / chii(sai), ko-, o-, sa-",
"七 / shichi / nana(tsu), nano",
"山 / san, sen / yama",
"話 / wa / hana(su), hanashi",
"女 / jo / onnna, me",
"北 / hoku / kita",
"午 / go / uma",
"百 / hyaku, byaka / momo",
"書 / sho / kaku",
"先 / sen / saki, ma(zui)",
"名 / mei, myou / na",
"川 / sen / kawa",
"千 / sen / chi",
"水 / sui / mizu",
"半 / han / naka(ba)",
"男 / dan, nan / otoko, o",
"西 / sei, sai / nishi",
"電 / den",
"校 / kou",
"語 / go / kata(ru)",
"土 / do, to / tsuchi",
"木 / boku, moku / ki, ko",
"聞 / bun, mon / ki(ku)",
"食 / shoku, jiki / k(u), ta(beru), ha(mu)",
"車 / sha/ kuruma",
"何 / ka / nani, nan",
"南 / nan, na / minami",
"万 / man, ban",
"毎 / mai / goto(ni)",
"白 / haku, byaku / shiro(i)",
"天 / ten / amatsu, ame, ama",
"母 / bo / haha, kaa",
"火 / ka / hi, bi, ho",
"右, u, yuu / migi",
"読 / doku, toku, tou / yo(mu)",
"友 / yuu/ tomo",
"左 / sa, sha / hidari",
"休 / kyuu / yasu(mu)",
"父 / fu / chichi, tou",
"雨 / u / ame, ama",
};
std::string definition[80]{	//Change this amount to the number of flash cards.
"day",
"one",
"country",
"person",
"year",
"big",
"ten",
"two",
"book/true",
"middle",
"leader",
"exit",
"three",
"hour",
"go",
"see",
"month/moon",
"minute/understand",
"back/later",
"last",
"life",
"five",
"space",
"up",
"east",
"four",
"now",
"gold",
"nine",
"enter",
"study",
"high/amount",
"yen",
"child",
"outside",
"eight",
"six",
"down",
"upcoming",
"mood",
"small",
"seven",
"mountain",
"talk",
"woman",
"north",
"noon",
"hundred",
"write",
"before",
"name",
"river/stream",
"thousand",
"water",
"half",
"man",
"west",
"electricity",
"school/exam",
"language",
"soil",
"tree/wood",
"listen",
"eat/food",
"car/wheel",
"what",
"south",
"ten-thousand",
"every",
"white",
"sky/heaven",
"mother",
"fire",
"right",
"read",
"friend",
"left",
"rest",
"father",
"rain",
};
int score = 80;	//Change this amount to the number of flash cards.
std::string answer; 
std::mt19937 rng(std::random_device{}());
int main(){
std::cout << "     ██╗██╗     ██████╗ ████████╗    ███╗   ██╗███████╗\n     ██║██║     ██╔══██╗╚══██╔══╝    ████╗  ██║██╔════╝\n     ██║██║     ██████╔╝   ██║       ██╔██╗ ██║███████╗\n██   ██║██║     ██╔═══╝    ██║       ██║╚██╗██║╚════██║\n╚█████╔╝███████╗██║        ██║       ██║ ╚████║███████║\n ╚════╝ ╚══════╝╚═╝        ╚═╝       ╚═╝  ╚═══╝╚══════╝ made by antomuto4\n" << std::endl;
std::cout << "This is how everything gets displayed:\nKanji / Onyumi / Kunyomi.\n\n\nNOTE: PLEASE DO NOT PRESS ENTER WITHOUT FILLING IN ANYTHING, IF YOU DO NOT KNOW THE ANSWER YOU STILL HAVE TO INPUT SOMETHING.\n\n\n";
for(int i=0;i<80;i++){	//Change this amount to the number of flash cards.
std::uniform_int_distribution<> dist(1, 80);
int number = dist(rng);
std::cout << i << "] What is the definiton of " << word[number] << ": ";
std::cin >> answer;
if(answer != definition[number]){
--score;
std::cout << "The correct answer is: " << definition[number] << "\n";} }
std::cout << "you got " << score << "/80 correct!\n" << std::endl;	//Change this amount to the number of flash cards.
}
