//#define DEBUG_MODE_FULL

#define MACRO_TRACERS \
    model = "\a3\weapons_f\data\bullettracer\tracer_red"; \
    tracerEndTime = 1; \
    tracerScale = 0.5; \
    tracerstartTime = 0.05; \
    nvgOnly = 0

#ifdef DEBUG_MODE_FULL
    #define MACRO_HANDGUN_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 0; \
        lastRoundsTracer = 2; \
        scope = 2; \
        scopeArsenal = 2

    #define MACRO_RIFLE_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 0; \
        lastRoundsTracer = 4; \
        scope = 2; \
        scopeArsenal = 2

    #define MACRO_MG_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 4; \
        lastRoundsTracer = 4; \
        scope = 2; \
        scopeArsenal = 2
#else
    #define MACRO_HANDGUN_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 0; \
        lastRoundsTracer = 2; \
        scope = 1; \
        scopeArsenal = 1

    #define MACRO_RIFLE_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 0; \
        lastRoundsTracer = 4; \
        scope = 1; \
        scopeArsenal = 1

    #define MACRO_MG_MAGAZINE \
        author = "Mike"; \
        descriptionShort = ""; \
        tracersEvery = 4; \
        lastRoundsTracer = 4; \
        scope = 1; \
        scopeArsenal = 1
#endif
