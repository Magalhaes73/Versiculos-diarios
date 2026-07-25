#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int i;
char vers[100][200];
char resposta;

void repeticao()
{
    i = rand() % 52;
    printf("Versiculo do dia:\n%s\n", vers[i]);
    printf("\nGostaria de outro versiculo? (Y/N): ");
    scanf(" %s", &resposta);
}
int main() {
    srand(time(NULL));
    { /*Versiculos*/
        strcpy(vers[0], "A mulher virtuosa e a coroa do seu marido; porem a que procede vergonhosamente e como apodrecimento nos seus ossos\n- Pv 12:4");
        strcpy(vers[1], "Toda mulher sabia edifica a sua casa; a insensata, porem, derruba-a com as suas maos\n- Pv 14:1");
        strcpy(vers[2], "Quem encontra uma esposa acha uma coisa boa; e alcanca o favor do Senhor\n- Pv 18:22");
        strcpy(vers[3], "Casa e riquezas sao herdadas dos pais; mas a mulher prudente vem do Senhor\n- Pv 19:14");
        strcpy(vers[4], "O que responde com palavras retas beija os labios\n- Pv 24:26");
        strcpy(vers[5], "Melhor e a repreensao aberta do que o amor encoberto\n- Pv 27:5");
        strcpy(vers[6], "O homem fiel gozara de abundantes bencaos; mas o que se apressa a enriquecer nao ficara impune\n- Pv 28:20");
        strcpy(vers[7], "Todas as coisas me sao licitas, mas nem todas as coisas convem. Todas as coisas me sao licitas; mas eu nao me deixarei dominar por nenhuma delas\n- 1Co 6:12");
        strcpy(vers[8], "A ansiedade no coracao do homem o abate; mas uma boa palavra o alegra\n- Pv 12:25");
        strcpy(vers[9], "O amigo ama em todo o tempo; e para a angustia nasce o irmao\n- Pv 17:17");
        strcpy(vers[10], "Porque Deus amou o mundo de tal maneira que deu o seu Filho unigenito, para que todo aquele que nele cre nao pereca, mas tenha a vida eterna\n- Jo 3:16");
        strcpy(vers[11], "Mas, como esta escrito: As coisas que olhos nao viram, nem ouvidos ouviram, nem penetraram o coracao do homem, sao as que Deus preparou para os que o amam\n- 1Co 2:9");
        strcpy(vers[12], "Eis que estou a porta e bato; se alguem ouvir a minha voz, e abrir a porta, entrarei em sua casa, e com ele cearei, e ele comigo\n- Ap 3:20");
        strcpy(vers[13], "Responderam: De Cesar. Entao lhes disse: Dai, pois, a Cesar o que e de Cesar, e a Deus o que e de Deus\n- Mt 22:21");
        strcpy(vers[14], "Mas buscai primeiro o seu reino e a sua justica, e todas estas coisas vos serao acrescentadas\n- Mt 6:33");
        strcpy(vers[15], "Nao ajunteis para vos tesouros na terra; onde a traca e a ferrugem os consomem, e onde os ladroes minam e roubam; mas ajuntai para vos tesouros no ceu, onde nem a traca nem a ferrugem os consumem, e onde os ladroes nao minam nem roubam. Porque onde estiver o teu tesouro, ai estara tambem o teu coracao\n- Mt 6:19-21");
        strcpy(vers[16], "Respondeu-lhe Jesus: Eu sou o caminho, e a verdade, e a vida; ninguem vem ao Pai, senao por mim\n- Jo 14:6");
        strcpy(vers[17], "Toda mulher sabia edifica a sua casa; a insensata, porem, derruba-a com as suas maos\n- Pv 14:1");
        strcpy(vers[18], "Ate no riso tera dor o coracao; e o fim da alegria e tristeza\n- Pv 14:13");
        strcpy(vers[19], "para que vos torneis filhos do vosso Pai que esta nos ceus; porque ele faz nascer o seu sol sobre maus e bons, e faz chover sobre justos e injustos\n- Mt 5:45");
        strcpy(vers[20], "Ainda que eu falasse as linguas dos homens e dos anjos, e nao tivesse amor, seria como o metal que soa ou como o cimbalo que retine\n- 1Co 13:1");
        strcpy(vers[21], "O que ama a contenda ama a transgressao; o que faz alta a sua porta busca a ruina\n- Pv 17:19");
        strcpy(vers[22], "Posso todas as coisas naquele que me fortalece\n- Fp 4:13");
        strcpy(vers[23], "O homem que tem muitos amigos, tem-nos para a sua ruina; mas ha um amigo que e mais chegado do que um irmao\n- Pv 18:24");
        strcpy(vers[24], "e uso de misericordia com milhares dos que me amam e guardam os meus mandamentos\n- Ex 20:6");
        strcpy(vers[25], "Vinde a mim, todos os que estai cansados e oprimidos, e eu vos aliviarei\n- Mt 11:28");
        strcpy(vers[26], "Pois nao faco o bem que quero, mas o mal que nao quero, esse pratico\n- Rm 7:19");
        strcpy(vers[27], "Quem ama os prazeres empobrecera; quem ama o vinho e o azeite nunca enriquecera\n- Pv 21:17");
        strcpy(vers[28], "O que guarda a sua boca e a sua lingua, guarda das angustias a sua alma\n- Pv 21:23");
        strcpy(vers[29], "Nao digas: Como ele me fez a mim, assim lhe farei a ele; pagarei a cada um segundo a sua obra\n- Pv 24:29");
        strcpy(vers[30], "Poe raramente o teu pe na casa do teu proximo, para que nao se enfade de ti, e te aborreca\n- Pv 25:17");
        strcpy(vers[31], "Se o teu inimigo tiver fome, da-lhe pao para comer, e se tiver sede, da-lhe agua para beber\n- Pv 25:21");
        strcpy(vers[32], "Nao respondas ao tolo segundo a sua estulticia, para que tambem nao te facas semelhante a ele\n- Pv 26:4");
        strcpy(vers[33], "Como o louco que atira ticoes, flechas, e morte, assim e o homem que engana o seu proximo, e diz: Fiz isso por brincadeira\n- Pv 26:18-19");
        strcpy(vers[34], "Nao tomaras o nome do Senhor teu Deus em vao; porque o Senhor nao tera por inocente aquele que tomar o seu nome em vao\n- Ex 20:7");
        strcpy(vers[35], "Porque ha um so Deus, e um so Mediador entre Deus e os homens, Cristo Jesus, homem\n- 1Tm 2:5");
        strcpy(vers[36], "O filho insensato e a calamidade do pai; e as rixas da mulher sao uma goteira continua\n- Pv 19:13");
        strcpy(vers[37], "Melhor e morar num canto do eirado, do que com a mulher rixosa numa casa ampla\n- Pv 21:9");
        strcpy(vers[38], "Melhor e morar numa terra deserta do que com a mulher rixosa e iracunda\n- Pv 21:19");
        strcpy(vers[39], "Cova profunda e a boca da adultera; aquele contra quem o Senhor esta irado caira nela\n- Pv 22:14");
        strcpy(vers[40], "Cova profunda e a boca da adultera; aquele contra quem o Senhor esta irado caira nela\n- Pv 22:14");
        strcpy(vers[41], "Porque cova profunda e a prostituta; e poco estreito e a aventureira. Tambem ela, como o salteador, se poe a espreitar; e multiplica entre os homens os prevaricadores\n- Pv 23:27-28");
        strcpy(vers[42], "Melhor e morar num canto do eirado, do que com a mulher rixosa numa casa ampla\n- Pv 25:24");
        strcpy(vers[43], "Como o vaso de barro coberto de escoria de prata, assim sao os labios ardentes e o coracao maligno\n- Pv 26:23");
        strcpy(vers[44], "A goteira continua num dia chuvoso e a mulher rixosa sao semelhantes\n- Pv 27:15");
        strcpy(vers[45], "Tal e o caminho da mulher adultera: ela come, e limpa a sua boca, e diz: nao pratiquei iniquidade\n- Pv 30:20");
        strcpy(vers[46], "Toda mulher sabia edifica a sua casa; a insensata, porem, derruba-a com as suas maos\n- Pv 14:1");
        strcpy(vers[47], "E eu achei uma coisa mais amarga do que a morte, a mulher cujo coracao sao lacos e redes, e cujas maos sao grilhoes; quem agradar a Deus escapara dela; mas o pecador vira a ser preso por ela\n- Ec 7:26");
        strcpy(vers[48], "A mulher virtuosa e a coroa do seu marido; porem a que procede vergonhosamente e como apodrecimento nos seus ossos\n- Pv 12:4");
        strcpy(vers[49], "Saberas, pois, no teu coracao que, como um homem corrige a seu filho, assim te corrige o Senhor teu Deus\n- Dt 8:5");
        strcpy(vers[50], "Como as nacoes que o Senhor vem destruindo diante de vos, assim vos perecereis, por nao quererdes ouvir a voz do Senhor vosso Deus\n- Dt 8:20");
        strcpy(vers[51], "Saibam todos que eu, somente eu, sou Deus; não há outro deus além de mim. Eu mato e eu faço viver; eu firo e eu curo. Ninguém pode me impedir de fazer o que quero\n- Dt 32:39");
        strcpy(vers[52], "");
        strcpy(vers[53], "");
        strcpy(vers[54], "");
        strcpy(vers[55], "");
        strcpy(vers[56], "");
        strcpy(vers[57], "");
        strcpy(vers[58], "");
        strcpy(vers[59], "");
        strcpy(vers[60], "");
        strcpy(vers[61], "");
        strcpy(vers[62], "");
        strcpy(vers[63], "");
        strcpy(vers[64], "");
        strcpy(vers[65], "");
        strcpy(vers[66], "");
        strcpy(vers[67], "");
        strcpy(vers[68], "");
        strcpy(vers[69], "");
        strcpy(vers[70], "");
        strcpy(vers[71], "");
        strcpy(vers[72], "");
        strcpy(vers[73], "");
        strcpy(vers[74], "");
        strcpy(vers[75], "");
        strcpy(vers[76], "");
        strcpy(vers[77], "");
        strcpy(vers[78], "");
        strcpy(vers[79], "");
        strcpy(vers[80], "");
        strcpy(vers[81], "");
        strcpy(vers[82], "");
        strcpy(vers[83], "");
        strcpy(vers[84], "");
        strcpy(vers[85], "");
        strcpy(vers[86], "");
        strcpy(vers[87], "");
        strcpy(vers[88], "");
        strcpy(vers[89], "");
        strcpy(vers[90], "");
        strcpy(vers[91], "");
        strcpy(vers[92], "");
        strcpy(vers[93], "");
        strcpy(vers[94], "");
        strcpy(vers[95], "");
        strcpy(vers[96], "");
        strcpy(vers[97], "");
        strcpy(vers[98], "");
        strcpy(vers[99], "");
    }
    printf("\nGostaria de um versiculo? (Y/N): ");
    scanf(" %s", &resposta);
    if (resposta != 'Y' && resposta != 'y') {
        return 0;
    }

    do {
        repeticao();
    } while (resposta == 'Y' || resposta == 'y');

    return 0;
}