# include<stdio.h>
# include<string.h>
void level(int ch);
void easy();
void medium();
void hard();
void reward(int score);
void gift();
int askForReplay();
struct question
{
    char ques[5000];
    char ch1[100], ch2[100], ch3[100], ch4[100];
    char ans;
    char key;
};
int main()
{
    printf("Hello User ! Welcome to our Quiz !!\n\nPlease enter your name...\n");
    char name[100];
    fgets(name, 100, stdin);
    int len=strlen(name);
    name[len-1]='\0';
    printf("%s, the instructions for the Quiz are as follows :\n", name);
    printf("* You will be asked to choose the level of the Quiz you want to give.\n* There will be 5 questions for you and 4 options.\n* Only one of the options is correct.\nYour answers will be evaluated and your score out of 5 will be displayed at the end of the Quiz.\n\nGOOD LUCK %s!!\n\n", name);
    printf("Choose the difficulty level:\n1. Easy\n2. Medium\n3. Difficult\n");
    int ch;   
    scanf("%d", &ch);
    getchar();
    level(ch);
    return 0;
}

void level(int ch)
{
    switch(ch)
    {
        case 1:
        easy();
        break;

        case 2:
        medium();
        break;

        case 3:
        hard();
        break;

        default:
        printf("Invalid choice !! Please enter choice again...\n");
        scanf("%d", &ch);
        level(ch);
    }
}

void easy()
{
    int score=0;
    struct question q[5];
    strcpy(q[0].ques, "What is the symbol of Gold?");
    strcpy(q[0].ch1, "Ag");
    strcpy(q[0].ch2, "Gd");
    strcpy(q[0].ch3, "Au");
    strcpy(q[0].ch4, "Go");\
    q[0].key='C';

    strcpy(q[1].ques, "What is the currency of Japan?");
    strcpy(q[1].ch1, "Japanese Dollar");
    strcpy(q[1].ch2, "Yen");
    strcpy(q[1].ch3, "Euro");
    strcpy(q[1].ch4, "Rupee");
    q[1].key='B';

    strcpy(q[2].ques, "Which is the longest mountain range in the world?");
    strcpy(q[2].ch1, "Himalayas");
    strcpy(q[2].ch2, "Mount Everest");
    strcpy(q[2].ch3, "Alps");
    strcpy(q[2].ch4, "Andes");
    q[2].key='D';

    strcpy(q[3].ques, "What is the capital of France?");
    strcpy(q[3].ch1, "Paris");
    strcpy(q[3].ch2, "Rome");
    strcpy(q[3].ch3, "Russia");
    strcpy(q[3].ch4, "France");
    q[3].key='A';

    strcpy(q[4].ques, "Who wrote the national anthem of India?");
    strcpy(q[4].ch1, "Bankim Chandra Chatterjee");
    strcpy(q[4].ch2, "Subhash Chandra Bose");
    strcpy(q[4].ch3, "Rabindranath Tagore");
    strcpy(q[4].ch4, "Mahatma Gandhi");
    q[4].key='C';

    printf("This is the easy round of the quiz...\n\n");
    int wrong[5];
    for(int x=0;x<5;x++)
    {
        printf("Q%d. %s\n", x+1, q[x].ques);
        printf("(A) %s\n(B) %s\n(C) %s\n(D) %s\n\n", q[x].ch1, q[x].ch2, q[x].ch3, q[x].ch4);
        printf("Enter your answer :\n");
        do{
        scanf(" %c", &q[x].ans);
        if(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'))
        {
            printf("Invalid choice...Please enter again...\n");
            scanf(" %c", &q[x].ans);
        }
        }while(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'));
        if(q[x].ans==q[x].key || q[x].ans==q[x].key+32)
        {
            printf("\033[1;32m");
            printf("\nRIGHT ANSWER !! :)\n\n");
            printf("\033[0m");
            wrong[x]=0;
            score++;
        }
        else{
            printf("\033[1;31m");
            printf("\nOOPS ! WRONG ANSWER :(\n\n");
            printf("\033[0m");
            wrong[x]=1;
        }
    }
    printf("Your score = %d/5\n\n", score);
    for(int x=0;x<5;x++)
    {
        if(wrong[x]==1)
        {
            printf("Ans. %d wrong\n", x+1);
        }
    }
    printf("\n");
    reward(score);
}

void medium()
{
    int score=0;
    struct question q[5];
    strcpy(q[0].ques, "Who is the President of the United States?");
    strcpy(q[0].ch1, "Donald Trump");
    strcpy(q[0].ch2, "Joe Biden");
    strcpy(q[0].ch3, "Barack Obama");
    strcpy(q[0].ch4, "Michelle Obama");
    q[0].key='B';

    strcpy(q[1].ques, "Which is the longest river in the world?");
    strcpy(q[1].ch1, "Amazon");
    strcpy(q[1].ch2, "Ganges");
    strcpy(q[1].ch3, "Nile");
    strcpy(q[1].ch4, "Congo River");
    q[1].key='C';

    strcpy(q[2].ques, "Which is the latest version of ChatGPT?");
    strcpy(q[2].ch1, "GPT 4");
    strcpy(q[2].ch2, "GPT 3.5");
    strcpy(q[2].ch3, "GPT 5");
    strcpy(q[2].ch4, "GPT 6.5");
    q[2].key='A';

    strcpy(q[3].ques, "How many countries are there in the world?");
    strcpy(q[3].ch1, "200");
    strcpy(q[3].ch2, "193");
    strcpy(q[3].ch3, "195");
    strcpy(q[3].ch4, "None of the above");
    q[3].key='C';

    strcpy(q[4].ques, "What is the correct full form of the GenZ abbreviation : ATP?");
    strcpy(q[4].ch1, "All time passtime");
    strcpy(q[4].ch2, "At this point");
    strcpy(q[4].ch3, "At the parlour");
    strcpy(q[4].ch4, "None of the above");
    q[4].key='B';

    printf("This is the medium round of the quiz...\n\n");
    int wrong[5];
    for(int x=0;x<5;x++)
    {
        printf("Q%d. %s\n", x+1, q[x].ques);
        printf("(A) %s\n(B) %s\n(C) %s\n(D) %s\n\n", q[x].ch1, q[x].ch2, q[x].ch3, q[x].ch4);
        printf("Enter your answer :\n");
        do{
        scanf(" %c", &q[x].ans);
        if(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'))
        {
            printf("Invalid choice...Please enter again...\n");
            scanf(" %c", &q[x].ans);
        }
        }while(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'));
        if(q[x].ans==q[x].key || q[x].ans==q[x].key+32)
        {
            printf("\033[1;32m");
            printf("\nRIGHT ANSWER !! :)\n\n");
            printf("\033[0m");
            wrong[x]=0;
            score++;
        }
        else{
            printf("\033[1;31m");
            printf("\nOOPS ! WRONG ANSWER :(\n\n");
            printf("\033[0m");
            wrong[x]=1;
        }
    }
    printf("Your score = %d/5\n\n", score);
    for(int x=0;x<5;x++)
    {
        if(wrong[x]==1)
        {
            printf("Ans. %d wrong\n", x+1);
        }
    }
    printf("\n");
    reward(score);
}

void hard()
{
    int score=0;
    struct question q[5];
    strcpy(q[0].ques, "What is the capital of Uzbekistan?");
    strcpy(q[0].ch1, "Canberra");
    strcpy(q[0].ch2, "Kabul");
    strcpy(q[0].ch3, "Dhaka");
    strcpy(q[0].ch4, "Tashkent");
    q[0].key='D';

    strcpy(q[1].ques, "Who wrote the poem : Daffodils?");
    strcpy(q[1].ch1, "Roald Dahl");
    strcpy(q[1].ch2, "William Wordsworth");
    strcpy(q[1].ch3, "Christina Rosetty");
    strcpy(q[1].ch4, "None of the above");
    q[1].key='B';

    strcpy(q[2].ques, "In which year did the Titanic sink?");
    strcpy(q[2].ch1, "1912");
    strcpy(q[2].ch2, "1918");
    strcpy(q[2].ch3, "1857");
    strcpy(q[2].ch4, "1818");
    q[2].key='A';

    strcpy(q[3].ques, "Who wrote : Pride and Prejudice?");
    strcpy(q[3].ch1, "William Shakespeare");
    strcpy(q[3].ch2, "Socrates");
    strcpy(q[3].ch3, "Austen");
    strcpy(q[3].ch4, "None of the above");
    q[3].key='C';

    strcpy(q[4].ques, "In which country is The Great Barrier Reef located?");
    strcpy(q[4].ch1, "Columbia");
    strcpy(q[4].ch2, "China");
    strcpy(q[4].ch3, "Australia");
    strcpy(q[4].ch4, "Guinea");
    q[4].key='C';

    printf("This is the hard round of the quiz...\n\n");
    int wrong[5];
    for(int x=0;x<5;x++)
    {
        printf("Q%d. %s\n", x+1, q[x].ques);
        printf("(A) %s\n(B) %s\n(C) %s\n(D) %s\n\n", q[x].ch1, q[x].ch2, q[x].ch3, q[x].ch4);
        printf("Enter your answer :\n");
        do{
        scanf(" %c", &q[x].ans);
        if(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'))
        {
            printf("Invalid choice...Please enter again...\n");
            scanf(" %c", &q[x].ans);
        }
        }while(!(q[x].ans=='A' || q[x].ans=='a' || q[x].ans=='B' || q[x].ans=='b' || q[x].ans=='C' || q[x].ans=='c' || q[x].ans=='D' || q[x].ans=='d'));
        if(q[x].ans==q[x].key || q[x].ans==q[x].key+32)
        {
            printf("\033[1;32m");
            printf("\nRIGHT ANSWER !! :)\n\n");
            printf("\033[0m");
            wrong[x]=0;
            score++;
        }
        else{
            printf("\033[1;31m");
            printf("\nOOPS ! WRONG ANSWER :(\n\n");
            printf("\033[0m");
            wrong[x]=1;
        }
    }
    printf("Your score = %d/5\n\n", score);
    for(int x=0;x<5;x++)
    {
        if(wrong[x]==1)
        {
            printf("Ans. %d wrong\n", x+1);
        }
    }
    printf("\n");
    reward(score);
}

void reward(int score)
{
    if(score<=2)
    {
        printf("Well played !! Try harder to score better");
    }
    else if(score==3 || score==4)
    {
        printf("Good job ! You're close to perfection...");
    }
    else{
        printf("You nailed it !! Keep it up...\nWe have a special gift for you...\nPress any key to view your GIFT\n");
        getchar();
        getchar();
        gift();
    }
    if(askForReplay()==1)
    {
        main();
    }
}

void gift()
{
    
     for(int i=0;i<5;i++)
     {
        for(int j=0;j<5;j++)
        {
            if(i==0)
            {
                if(j==0 || j==2 || j==3 || j==4)
                {
                    printf("\033[1;35m");
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i==1)
            {
                if(j==0 || j==2)
                {
                    printf("\033[1;35m");
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i==2)
            {
                printf("\033[1;35m");
                printf("* ");
            }
            else if(i==3)
            {
                if(j==2 || j==4)
                {
                    printf("\033[1;35m");
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
            else if(i==4)
            {
                if(j==0 || j==1 || j==2 || j==4)
                {
                    printf("\033[1;35m");
                    printf("* ");
                }
                else{
                    printf("  ");
                }
            }
        }
        printf("\n");
        printf("\033[0m");
     }
}

int askForReplay()
{
    char ch;
    printf("\nDo you want to replay the Quiz? Press 'Y' for YES or any other key for NO.\n");
    getchar();    
    scanf("%c", &ch);
    getchar();
    if(ch=='Y' || ch=='y')
    {
        return 1;
    }
    else{
        return 0;
    }
}