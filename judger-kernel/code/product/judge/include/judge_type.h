#ifndef _JUDGE_TYPE_H_
#define _JUDGE_TYPE_H_

#include "product\judge\include\judge_inc.h"

#define JUDGE_OJNAME_SIZE_MAX 32

typedef struct tag_Judge_Solution_ST
{
	int solutionId;
	int languageId;
	int verdictId;
	time_t submitDate;
	char username[MAX_NAME];
	int reJudge;
	char languageName[100]={0};
	char languageExt[10]={0};
	char languageExe[10]={0};
	
}JUDGE_SOLUTION_ST;

#define JUDGE_CMD_BUFFER 1024

typedef struct tag_Judge_Submission_ST
{
	JUDGE_SOLUTION_ST     stSolution;

	//int time_used_case;     /* ����case��ʱ */
	//int memory_used_case;

    int isTranscoding;   /* ���VS��ת�� */
    int limitIndex;
    int nProcessLimit;

	char szSource[MAX_CODE];

	char languageName[100];
	char languageExt[10];
	char languageExe[10];

	unsigned long ulSeed;  /* ������� */

	char subPath[MAX_PATH]; /* ��Ŀ¼ */
	char result[MAX_PATH];//���н��


	char sourcePath[MAX_PATH];
	char exePath[MAX_PATH];
    char inFileName[MAX_PATH];
    char outFileName[MAX_PATH];
    char DebugFile[MAX_PATH];
    char ErrorFile[MAX_PATH];

	char *result_Json; /* ��ʽ: json���洢�жϽ�� */

    char compileCmd[1024];
    char runCmd[1024];

	PROCESS_INFORMATION pProRunInfo; /* ���н�����Ϣ */
	PROCESS_INFORMATION pProComInfo; /* ���������Ϣ */

	HANDLE hJob;         /* ��ҵ��� */

    DWORD dwProStatusCode;     /* �������״̬ */

	HANDLE hInputFile ;  /* �����������ļ���� */
	HANDLE hOutputFile;  /* �ӽ��̱�׼������ */

	//clock_t startt; /* ÿ��run��ʱ��� */
	//clock_t endt ;  /* ÿ��run��ʱ��� */

}JUDGE_SUBMISSION_ST;

#endif
