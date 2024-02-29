
// INNOVATIVE PROJECT

/*

Morse code:-

plain :     A	B	  C	    D	 E	 F	   G	H	 I	 J	   K	L	   M	N	O	 P	   Q	 R	   S	T	U	 V	   W	X	  Y 	Z
morse code: .-  -...  -.-.  -..  .   ..-.  --.  .... ..  .---  -.-  .-..   --   -.  ---  .--.  --.-  .-.   ...  -   ..-  ...-  .--  -..-  -.--  --..
numbers:    1      2      3      4      5      6      7      8      9      0
morse code: .----  ..---  ...--  ....-  .....  -....  --...  ---..  ----.  -----

caesar cipher:-

Plain	A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z
Cipher	X	Y	Z	A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W

Symbolic Fun:-

plain : A	B	C	D	E	F	G	H	I	J	K	L	M	N	O	P	Q	R	S	T	U	V	W	X	Y	Z
symbol: !   @   #   $   %   ^   &   *   ~   `   ,   .   ?   /   \   ]   [   >  <  _   -   +   =   x   )   (
numbers: 1   2   3   4   5   6   7   8   9    0
symbols: !@  @!  #$  $#  %^  ^%  &*  *&  )(  ).(

*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

void morse_code();
void caesar_cipher();
void symbolic_fun();
void code_morse();
void cipher_caesar();
void vigenere_cipher();
void cipher_vigenere();
void fun_symbolic();
char yes;
void main();


void main()
{
    int c,c1,count=0,ch;
    char rea[100];

    printf(" \n\n\n\t\t\t\t------------------------------------------------------------- \n");
    printf(" \t\t\t\t|                   ~~~~~~~~~~~~~~~~~~~~                    | \n\n");
    printf(" \t\t\t\t| *****************      M - CIPHER      *****************  | \n\n");
    printf(" \t\t\t\t|                   ~~~~~~~~~~~~~~~~~~~~                    | \n");
    printf(" \t\t\t\t------------------------------------------------------------- \n\n\n");

    printf("\t\t\t~~~~  BECOME ONE OF US WHO CAN ENCRYPT AND DECRYPT THEIR MESSAGES =^_^= ~~~~  \n\n\n");


    //while(1)
    do
    {

    printf("\n\n\n\n\n You want to encrypt your message or decrypt your message? \n\t\t ~`~` 1.Encrypt `~`~ \n\t\t ~`~` 2.Decrypt `~`~ \n\t\t ~`~` 3.Exit    `~`~ \n:-");
    scanf("%d",&ch);

    //ch = getchar();


    //if(isdigit(ch) || ch == '\n')
    if(ch==1 || ch ==2 || ch==3)
    {
        //if (ch==1 || ch==2 || ch==3 || ch=='\n')
          //  goto hey;
    //hey:{
    if(ch==1)
     {
        count++;
        printf("\nHow do you wanna encrypt your msg? \n\nChoose an option: \n\n\t\t ~~~~  1.Morse code      ~~~~ \n\n\t\t ~~~~  2.Caesar cipher   ~~~~ \n\n\t\t ~~~~  3.Symbolic fun    ~~~~ \n\n\t\t ~~~~  4.Vigenere cipher ~~~~ \n\n:-");
        scanf("%d",&c);
        switch(c)
        {
        case 1:
             morse_code();
            break;
        case 2:
             caesar_cipher();
            break;
        case 3:
            symbolic_fun();
            break;
        case 4:
            vigenere_cipher();
            break;
        default:
            printf("Invalid choice");
         }
         printf("\n\nDo you wanna continue with other operations? [y/n]: ");
         //scanf (" %[^\n]s", yes);

         //yes = getchar();

         scanf(" %c" ,&yes);

      }
    else if (ch==2)
        {

            count++;
        printf("What kind of decryption do you want..? select one of the below options:");
        printf("\n\n\t\t ~~~~  1.Morse code      ~~~~ \n\n\t\t ~~~~  2.Caesar cipher   ~~~~ \n\n\t\t ~~~~  3.Vigenere cipher ~~~~ \n\n\t\t ~~~~  4.Symbolic fun ~~~~ \n\n :-");
        scanf("%d",&c1);

        switch(c1)
        {
        case 1:
            code_morse();
            break;
        case 2:
            cipher_caesar();
            break;
        case 3:
            cipher_vigenere();
            break;
        case 4:
            fun_symbolic();
            break;
        default:
            printf("Invalid choice");
        }
         printf("\n\nDo you wanna continue with other operations? [y/n]: ");
         //scanf (" %[^\n]s", yes);

         //yes = getchar();

         scanf(" %c" ,&yes);

        }
    else if (ch==3)
     {
        if(count!=0)
        {

         printf("\n\n\n\t\t *~*~*~   Thank you for using our program...Have a great day =^_^=   *~*~*~\n\n\n");

        exit(0);
        }
        else
        {
            printf("\n\n\nIs there anything we need to improve? because it seems like you din't perform any of the above operations..\n\n what's wrong?: ");
            scanf (" %[^\n]s", rea);
            printf("\n\n\nThanks for the feed back.. we'll try our best to match your needs if reasonable ;) \n\n\n");
            exit(0);

        }
     }

    /* else if (ch == '\n')
     {
         goto hey;
     }
     */

    /*else
     {
        printf("\n\nInvalid Choice :( ");
        printf("\n\nChoose the options given in the menu ^-^ \n\n\n");
     }
     */



    //}
    }


    else
    {
        printf("\n\nInvalid Choice :( ");

        printf("\n\n\nThe given input is not a valid one\n");
        printf("\n\nChoose the options given in the menu ^-^ \n\n\n");
        yes == 'y';

    }

    }while(yes == 'y' || yes == 'Y');


    if (yes == 'n' || yes == 'N' )
    {
        printf("\n\n\n\t\t *~*~*~   Thank you for using our program...Have a great day =^_^=   *~*~*~\n\n\n");

        exit(0);
    }


}

//encryption
void morse_code()
{
    int n,i;
    char s[1000];
    char *morse_code[36] = {
        ".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-",
        ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-",
        ".--", "-..-", "-.--", "--..", ".----", "..---", "...--", "....-", ".....",
        "-....", "--...", "---..", "----.", "-----", "--..--", ".-.-.-", "..--.."
    };


    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      MORSE CODE      ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");

    printf(" Enter the message you wanna encrypt:  ");
    scanf (" %[^\n]s", s);
    printf("\n");

    n = strlen(s);

    printf("\n Size of your message is = %d ",n);
    printf("\n\n\n");

    printf(" Encrypted Message is :- ");

    for (i=0;i<n;i++)
    {
        char c = s[i];
        if (c == ' ') {
            printf("  / ");
        } else if (c >= 'A' && c <= 'Z') {
            printf("%s ", morse_code[c - 'A']);
        } else if (c >= 'a' && c <= 'z') {
            printf("%s ", morse_code[c - 'a']);
        } else if (c >= '0' && c <= '9') {
            printf("%s ", morse_code[c - '0' + 26]);
        } else if (c == '.') {
            printf("%s ", morse_code[36]);
        } else if (c == ',') {
            printf("%s ", morse_code[37]);
        } else if (c == '?') {
            printf("%s ", morse_code[38]);
        } else printf("%c ", c);
    }

    printf("\n\n");


    printf(" \t\t| ~~~~~~~~~~~~~~~      Encryption Done      ~~~~~~~~~~~~~~  | \n\n");





    }

//encryption
void caesar_cipher()
{
    int no,i;
    char st[1000];

    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      CAESAR CIPHER   ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");

    printf(" Enter the message you wanna encrypt : ");
        scanf (" %[^\n]s", st);
    printf("\n\n");
    no = strlen(st);

    printf(" size of your message is = %d \n",no);
    printf("\n\n");

    printf(" Encrypted Message is :- ");


    for(i=0;i<no;i++)
   {
       int x= (int)st[i];
       if(x==32) printf(" / ");
       else if(x==97 || x==98 || x==99) printf("%c", (char)(x+23));
       else if(x>=100 && x<=122) printf("%c", (char)(x-3));
       else printf("%c",st[i]);

    }

    printf("\n\n");

    printf(" \t\t| ~~~~~~~~~~~~~~~      Encryption Done      ~~~~~~~~~~~~~~  | \n\n");
}

//encryption
void symbolic_fun()
{
    int num,i;
    char sym[1000];

    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      SYMBOLIC FUN    ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");

    printf(" Enter the message you wanna encrypt: ");
    scanf (" %[^\n]s", sym);
    printf("\n\n");

    num = strlen(sym);

    printf(" size of your message is = %d ",num);
    printf("\n\n");

    printf(" Encrypted Message is :- ");


    for (i=0;i<num;i++)
    {
        if(sym[i]=='a' || sym[i]=='A')
        {
            printf("! ");
        }
        if(sym[i]=='b' || sym[i]=='B')
        {
            printf("@ ");
        }
        if(sym[i]=='c' || sym[i]=='C')
        {
            printf("# ");
        }
        if(sym[i]=='d' || sym[i]=='D')
        {
            printf("$ ");
        }
        if(sym[i]=='e' || sym[i]=='E')
        {
            printf("% ");
        }
        if(sym[i]=='f' || sym[i]=='F')
        {
            printf("^ ");
        }
        if(sym[i]=='g' || sym[i]=='G')
        {
            printf("& ");
        }
        if(sym[i]=='h' || sym[i]=='H')
        {
            printf("* ");
        }
        if(sym[i]=='i' || sym[i]=='I')
        {
            printf("~ ");
        }
        if(sym[i]=='j' || sym[i]=='J')
        {
            printf("` ");
        }
        if(sym[i]=='k' || sym[i]=='K')
        {
            printf(", ");
        }
        if(sym[i]=='l' || sym[i]=='L')
        {
            printf(". ");
        }
        if(sym[i]=='m' || sym[i]=='M')
        {
            printf("? ");
        }
        if(sym[i]=='n' || sym[i]=='N')
        {
            printf("/ ");
        }
        if(sym[i]=='o' || sym[i]=='O')
        {
            printf("| ");
        }
        if(sym[i]=='p' || sym[i]=='P')
        {
            printf("] ");
        }
        if(sym[i]=='q' || sym[i]=='Q')
        {
            printf("[ ");
        }
        if(sym[i]=='r' || sym[i]=='R')
        {
            printf("> ");
        }
        if(sym[i]=='s' || sym[i]=='S')
        {
            printf("< ");
        }
        if(sym[i]=='t' || sym[i]=='T')
        {
            printf("_ ");
        }
        if(sym[i]=='u' || sym[i]=='U')
        {
            printf("- ");
        }
        if(sym[i]=='v' || sym[i]=='V')
        {
            printf("+ ");
        }
        if(sym[i]=='w' || sym[i]=='W')
        {
            printf("= ");
        }
        if(sym[i]=='x' || sym[i]=='X')
        {
            printf("x ");
        }
        if(sym[i]=='y' || sym[i]=='Y')
        {
            printf(") ");
        }
        if(sym[i]=='z' || sym[i]=='Z')
        {
            printf("( ");
        }
        if(sym[i]==' ')
        {
            printf("  ");
        }
        if(sym[i]=='1')
        {
            printf("!@ ");
        }
        if(sym[i]=='2')
        {
            printf("@! ");
        }
        if(sym[i]=='3')
        {
            printf("#$ ");
        }
        if(sym[i]=='4')
        {
            printf("$# ");
        }
        if(sym[i]=='5')
        {
            printf("%^ ");
        }
        if(sym[i]=='6')
        {
            printf("^% ");
        }
        if(sym[i]=='7')
        {
            printf("&* ");
        }
        if(sym[i]=='8')
        {
            printf("*& ");
        }
        if(sym[i]=='9')
        {
            printf(")( ");
        }
        if (sym[i]==0)
        {
            printf(").(");
        }


    }
    printf("\n\n");

     printf(" \t\t| ~~~~~~~~~~~~~~~      Encryption Done      ~~~~~~~~~~~~~~  | \n\n");
}

//decryption
void code_morse()
{
 int i=0,j=0,k=0,flag=0,n;
    char *alphabets[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---",
                    "-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-",
     "...-",".--","-..-","-.--","--.."};
 char *numbers[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};

    char morseCode[1000]={0},substr[1000][100]={0},c;

    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      MORSE CODE      ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");


    printf("Enter a Morse Code with spaces : \n:-  ");
        scanf (" %[^\n]s", morseCode);
        printf("\n\n");

        n = strlen(morseCode);
        printf("Size of your message is: %d\n\n",n);

    printf("\nDecrypted Message is :- ");


    while(morseCode[k]!='\0')//for splitting sentence
    {
        j=0;
        while(morseCode[k]!=' '&&morseCode[k]!='\0')
        {
            substr[i][j]=morseCode[k];
            k++;
            j++;
        }
        substr[i][j]='\0';
        i++;
        if(morseCode[k]!='\0')
        {
            k++;
        }
    }
    int len=i;
 for(i=0;i<len;i++)
 {
  for(j=0;j<25;j++)
  {
   if(!strcmp(alphabets[j],substr[i]))//strcmp returns 0 if they are same
   {
    printf("%c",(j+65));
    break;
   }
  }
  for(j=0;j<9;j++)
  {
   if(!strcmp(numbers[j],substr[i]))
   {
    printf("%d",j);
    break;
   }
  }
 }

 printf("\n\n");

     printf(" \t\t| ~~~~~~~~~~~~~~~      Decryption Done      ~~~~~~~~~~~~~~  | \n\n");
}

//decryption
void cipher_caesar()
{
    int no,i;
    char st[1000];

    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      CAESAR CIPHER   ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");


    printf("Enter the message you wanna encrypt : ");
        scanf (" %[^\n]s", st);
    printf("\n\n");
    no = strlen(st);

    printf("size of your message is = %d \n",no);
    printf("\n\n");

    printf("Decrypted Message is :- ");


    for(i=0;i<no;i++)
   {
        if (st[i]=='x')
        {
            printf("a");
        }
         if (st[i]=='X')
        {
            printf("A");
        }
         if (st[i]=='y')
        {
            printf("b");
        }
         if (st[i]=='Y')
        {
            printf("B");
        }
         if (st[i]=='z')
        {
            printf("c");
        }
         if (st[i]=='Z')
        {
            printf("C");
        }
         if (st[i]=='a')
        {
            printf("d");
        }
         if (st[i]=='A')
        {
            printf("D");
        }
         if (st[i]=='b')
        {
            printf("e");
        }
         if (st[i]=='B')
        {
            printf("E");
        }
         if (st[i]=='c')
        {
            printf("f");
        }
         if (st[i]=='C')
        {
            printf("F");
        }
         if (st[i]=='d')
        {
            printf("g");
        }
         if (st[i]=='D')
        {
            printf("G");
        }
         if (st[i]=='e')
        {
            printf("h");
        }
         if (st[i]=='E')
        {
            printf("H");
        }
         if (st[i]=='f')
        {
            printf("i");
        }
         if (st[i]=='F')
        {
            printf("I");
        }
         if (st[i]=='g')
        {
            printf("j");
        }
         if (st[i]=='G')
        {
            printf("J");
        }
         if (st[i]=='h')
        {
            printf("k");
        }
         if (st[i]=='H')
        {
            printf("K");
        }
         if (st[i]=='i')
        {
            printf("l");
        }
         if (st[i]=='I')
        {
            printf("L");
        }
         if (st[i]=='j')
        {
            printf("m");
        }
         if (st[i]=='J')
        {
            printf("M");
        }
         if (st[i]=='k')
        {
            printf("n");
        }
         if (st[i]=='K')
        {
            printf("N");
        }
         if (st[i]=='l')
        {
            printf("o");
        }
         if (st[i]=='L')
        {
            printf("O");
        }
         if (st[i]=='m')
        {
            printf("p");
        }
         if (st[i]=='M')
        {
            printf("P");
        }
         if (st[i]=='n')
        {
            printf("q");
        }
         if (st[i]=='N')
        {
            printf("Q");
        }
         if (st[i]=='o')
        {
            printf("r");
        }
         if (st[i]=='O')
        {
            printf("R");
        }
         if (st[i]=='p')
        {
            printf("s");
        }
         if (st[i]=='P')
        {
            printf("S");
        }
         if (st[i]=='q')
        {
            printf("t");
        }
         if (st[i]=='Q')
        {
            printf("T");
        }
         if (st[i]=='r')
        {
            printf("u");
        }
         if (st[i]=='R')
        {
            printf("U");
        }
         if (st[i]=='s')
        {
            printf("v");
        }
         if (st[i]=='S')
        {
            printf("V");
        }
         if (st[i]=='t')
        {
            printf("w");
        }
         if (st[i]=='T')
        {
            printf("W");
        }
         if (st[i]=='u')
        {
            printf("x");
        }
         if (st[i]=='U')
        {
            printf("X");
        }
         if (st[i]=='v')
        {
            printf("y");
        }
         if (st[i]=='V')
        {
            printf("Y");
        }
         if (st[i]=='w')
        {
            printf("z");
        }
         if (st[i]=='W')
        {
            printf("Z");
        }
        if (st[i]==' ')
        {
            printf(" / ");
        }

    }
    printf("\n\n");

    printf(" \t\t| ~~~~~~~~~~~~~~~      Decryption Done      ~~~~~~~~~~~~~~  | \n\n");

}

//encryption
void vigenere_cipher()
{
    char msg[1000];
    char key[1000];
    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      VIGENERE CIPHER ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");
    printf(" Enter the message you wanna Encrypt (All the letters must be in upper case): ");
    scanf (" %[^\n]s", msg);
    printf("\n\n");
    printf("Enter a key (All the letters must be in uppercase only): ");
    printf("\n   (A key is used to generate the cipher text...Based on the key cipher text will be generated... you can give any word as key ..)\n :- ");
    scanf (" %[^\n]s", key);
    printf("\n\n");
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j)
    {
        if(j == keyLen)
            j = 0;
        newKey[i] = key[j];
    }
    newKey[i] = '\0';
    //encryption
    for(i = 0; i < msgLen; ++i)
    {
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
    }
    encryptedMsg[i] = '\0';
    printf("\n\n Key:- %s", key);
    printf("\n\n\n New Generated Key:- %s", newKey);
    printf("\n\n\n Encrypted Message:- %s", encryptedMsg);
    printf(" \n\n\t\t| ~~~~~~~~~~~~~~~      Encryption Done      ~~~~~~~~~~~~~~  | \n\n");
}
//decryption
void cipher_vigenere()
{
    char msg[1000];
    char key[1000];
    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      VIGENERE CIPHER ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");
    printf("Enter the message you wanna Decrypt (All the letters must be in upper case): ");
    scanf (" %[^\n]s", msg);
    printf("\n");
    printf("Enter a key (All the letters must be in uppercase only): ");
    printf("\n   (A key is used to generate the plain text in the decryption case...\nBased on the key plain text will be generated...And you need the correct key to get the correct plain text...)\n :- ");
    scanf (" %[^\n]s", key);
    printf("\n");
    int msgLen = strlen(msg), keyLen = strlen(key), i, j;
    char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];
    //generating new key
    for(i = 0, j = 0; i < msgLen; ++i, ++j)
    {
        if(j == keyLen)
            j = 0;
        newKey[i] = key[j];
    }
    newKey[i] = '\0';
    strcpy(encryptedMsg,msg);
    //decryption
    for(i = 0; i < msgLen; ++i)
    {
        decryptedMsg[i] = (((encryptedMsg[i] - newKey[i]) + 26) % 26) + 'A';
    }
    decryptedMsg[i] = '\0';
    printf("\n\n Key:- %s", key);
    printf("\n\n\n New Generated Key:- %s", newKey);
    printf("\n\n\n Decrypted Message:- %s", decryptedMsg);
    printf(" \n\n\t\t| ~~~~~~~~~~~~~~~      Decryption Done      ~~~~~~~~~~~~~~  | \n\n");
}
void fun_symbolic()
{
    int num,i;
    char sym[1000];
    printf(" \n\n\t\t------------------------------------------------------------- \n");
    printf(" \t\t| ~~~~~~~~~~~~~~~~~      SYMBOLIC FUN    ~~~~~~~~~~~~~~~~~  | \n");
    printf(" \t\t------------------------------------------------------------- \n\n\n");
    printf(" Enter the message you wanna encrypt: ");
    scanf (" %[^\n]s", sym);
    printf("\n\n");
    num = strlen(sym);
    printf(" size of your message is = %d ",num);
    printf("\n\n");
    printf(" Decrypted Message is :- ");
    for (i=0;i<num;i++)
    {
        if(sym[i]== '!')
        {
            printf("A");
        }
        if(sym[i]=='@')
        {
            printf("B");
        }
        if(sym[i]=='#')
        {
            printf("C");
        }
        if(sym[i]=='$')
        {
            printf("D");
        }
        if(sym[i]=='%')
        {
            printf("E");
        }
        if(sym[i]=='^')
        {
            printf("F");
        }
        if(sym[i]=='&')
        {
            printf("G");
        }
        if(sym[i]=='*')
        {
            printf("H");
        }
        if(sym[i]=='~')
        {
            printf("I");
        }
        if(sym[i]=='`')
        {
            printf("J");
        }
        if(sym[i]==',')
        {
            printf("K");
        }
        if(sym[i]=='.')
        {
            printf("L");
        }
        if(sym[i]=='?')
        {
            printf("M");
        }
        if(sym[i]=='/')
        {
            printf("N");
        }
        if(sym[i]=='|')
        {
            printf("O");
        }
        if(sym[i]==']')
        {
            printf("P");
        }
        if(sym[i]=='[')
        {
            printf("Q");
        }
        if(sym[i]== '>' )
        {
            printf("R");
        }
        if(sym[i]== '<' )
        {
            printf("S");
        }
        if(sym[i]=='_')
        {
            printf("T");
        }
        if(sym[i]=='-')
        {
            printf("U");
        }
        if(sym[i]=='+')
        {
            printf("V");
        }
        if(sym[i]=='=')
        {
            printf("W");
        }
        if(sym[i]=='x')
        {
            printf("X");
        }
        if(sym[i]==')')
        {
            printf("Y");
        }
        if(sym[i]=='(')
        {
            printf("Z");
        }
        if(sym[i]==' ' && sym[i+1]==' ')
        {
            printf(" ");
        }
        if(sym[i]=='!@')
        {
            printf("1");
        }
        if(sym[i]=='@!')
        {
            printf("2");
        }
        if(sym[i]=='#$')
        {
            printf("3");
        }
        if(sym[i]=='$#')
        {
            printf("4");
        }
        if(sym[i]=='%^')
        {
            printf("5");
        }
        if(sym[i]=='^%')
        {
            printf("6");
        }
        if(sym[i]=='&*')
        {
            printf("7");
        }
        if(sym[i]=='*&')
        {
            printf("8");
        }
        if(sym[i]==')(')
        {
            printf("9");
        }
        if (sym[i]==').(')
        {
            printf("0");
        }


    }
    printf("\n\n");

     printf(" \t\t| ~~~~~~~~~~~~~~~      Decryption Done      ~~~~~~~~~~~~~~  | \n\n");
}
