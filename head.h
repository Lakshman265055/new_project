

#ifndef __HEAD_H__
#define __HEAD_H__

/**
 * @brief 
 * 
 */
typedef struct{
  int reg_no;
  char name[100];
  int maths_mar;
  int eng_mar;
  int telugu_mar;
}student;

/**
 * @brief 
 * 
 * @param x 
 * @param y 
 * @param z 
 * @return int 
 */
int avg(int x,int y,int z);

/**
 * @brief 
 * 
 * @param avg 
 * @return char 
 */
char grade(int avg);

#endif
