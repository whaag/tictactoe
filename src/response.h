#ifndef RESPONSE_HEADER
#define RESPONSE_HEADER

typedef struct ResponseDTO {
  unsigned int code;
  char message[30];
} Response;

#endif
