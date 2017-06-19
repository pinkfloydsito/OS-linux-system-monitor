#ifndef _MONITOR_H_
#define _MONITOR_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/queue.h>

#define MEM 0
#define CPU 1;

struct process{
  char* name;
  int pid;
  float cpu_usage;
  float mem_usage;
  int type;
  LIST_ENTRY(process) processes;
};


struct buffer{
  char* line;
  LIST_ENTRY(buffer) buffers;
};

typedef LIST_HEAD(pr_list, process) head_p;
typedef LIST_HEAD(bf_list, buffer) head_b;


void fill_list_buf(head_b *hb, head_p* hp);
void init_heads(head_p* hp, head_b *hb);

#endif
