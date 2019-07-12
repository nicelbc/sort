void bubble(int score[]){
for(int i =0;i < score.length - 1;i++)
        {
            for(int j = 0;j <  score.length - 1-i;j++)// j开始等于0，
            {
                if(score[j] < score[j+1])
                {
                    int temp = score[j];
                    score[j] = score[j+1];
                    score[j+1] = temp;
                }
            }
        }
        }
