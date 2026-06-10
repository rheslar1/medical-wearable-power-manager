#include <stdio.h>
#include <stddef.h>

typedef struct {
  const char *title;
  const char *summary;
  const char *evidence_target;
  const char *tags[8];
  size_t tag_count;
} project_profile_t;

static const project_profile_t profile = {
  "Medical Wearable Power Manager",
  "RTOS power-management thread for a battery wearable that schedules sensor reads, enters deep sleep, and uses DMA for autonomous sampling.",
  "Days-to-weeks runtime thinking, measurable sleep-current reduction, autonomous capture, and medical-device-grade power discipline.",
  {
  "RTOS",
  "Sleep states",
  "DMA",
  "Sensor sampling",
  "Battery telemetry",
  "Wake sources"
  },
  6u
};

int main(void) {
  printf("%s\n", profile.title);
  printf("Summary: %s\n", profile.summary);
  printf("Evidence target: %s\n", profile.evidence_target);
  printf("Stack:");

  for (size_t index = 0; index < profile.tag_count; ++index) {
    printf(" %s%s", profile.tags[index], index + 1u == profile.tag_count ? "" : ",");
  }

  printf("\n");
  return 0;
}
