#ifndef dsp_full_loc
#define dsp_full_loc
#include <pgmspace.h>
/*************************************************************************************
    HOWTO:
    Copy this file to yoRadio/locale/displayL10n_custom.h
    and modify it
*************************************************************************************/
// Дні тижня (скорочено)
const char mon[] PROGMEM = "пн";
const char tue[] PROGMEM = "вт";
const char wed[] PROGMEM = "ср";
const char thu[] PROGMEM = "чт";
const char fri[] PROGMEM = "пт";
const char sat[] PROGMEM = "сб";
const char sun[] PROGMEM = "нд";

// Дні тижня (повністю)
const char monf[] PROGMEM = "понеділок";
const char tuef[] PROGMEM = "вівторок";
const char wedf[] PROGMEM = "середа";
const char thuf[] PROGMEM = "четвер";
const char frif[] PROGMEM = "п'ятниця";
const char satf[] PROGMEM = "субота";
const char sunf[] PROGMEM = "неділя";

// Місяці
const char jan[] PROGMEM = "січень";
const char feb[] PROGMEM = "лютий";
const char mar[] PROGMEM = "березень";
const char apr[] PROGMEM = "квітень";
const char may[] PROGMEM = "травень";
const char jun[] PROGMEM = "червень";
const char jul[] PROGMEM = "липень";
const char aug[] PROGMEM = "серпень";
const char sep[] PROGMEM = "вересень";
const char octt[] PROGMEM = "жовтень";
const char nov[] PROGMEM = "листопад";
const char decc[] PROGMEM = "грудень";

// Напрямки вітру
const char wn_N[]      PROGMEM = "ПІВНІЧ";
const char wn_NNE[]    PROGMEM = "ПнСхПн"; // Північ-північний схід
const char wn_NE[]     PROGMEM = "ПнСх";   // Північний схід
const char wn_ENE[]    PROGMEM = "СхПнСх"; // Схід-північний схід
const char wn_E[]      PROGMEM = "СХІД";
const char wn_ESE[]    PROGMEM = "СхПдСх"; // Схід-південний схід
const char wn_SE[]     PROGMEM = "ПдСх";   // Південний схід
const char wn_SSE[]    PROGMEM = "ПдСхПд"; // Південь-південний схід
const char wn_S[]      PROGMEM = "ПІВДЕНЬ";
const char wn_SSW[]    PROGMEM = "ПдЗхПд"; // Південь-південний захід
const char wn_SW[]     PROGMEM = "ПдЗх";   // Південний захід
const char wn_WSW[]    PROGMEM = "ЗхПдЗх"; // Захід-південний захід
const char wn_W[]      PROGMEM = "ЗАХІД";
const char wn_WNW[]    PROGMEM = "ЗхПнЗх"; // Захід-північний захід
const char wn_NW[]     PROGMEM = "ПнЗх";   // Північний захід
const char wn_NNW[]    PROGMEM = "ПнЗхПн"; // Північ-північний захід

// Масиви вказівників
const char* const dow[]     PROGMEM = { sun, mon, tue, wed, thu, fri, sat };
const char* const dowf[]    PROGMEM = { sunf, monf, tuef, wedf, thuf, frif, satf };
const char* const mnths[]   PROGMEM = { jan, feb, mar, apr, may, jun, jul, aug, sep, octt, nov, decc };
const char* const wind[]    PROGMEM = { wn_N, wn_NNE, wn_NE, wn_ENE, wn_E, wn_ESE, wn_SE, wn_SSE, wn_S, wn_SSW, wn_SW, wn_WSW, wn_W, wn_WNW, wn_NW, wn_NNW, wn_N };

// Повідомлення інтерфейсу
const char    const_PlReady[]    PROGMEM = "[готово]";
const char  const_PlStopped[]    PROGMEM = "[зупинено]";
const char  const_PlConnect[]    PROGMEM = "[підключення]";
const char  const_DlgVolume[]    PROGMEM = "ГУЧНІСТЬ";
const char    const_DlgLost[]    PROGMEM = "* ВТРАЧЕНО *";
const char  const_DlgUpdate[]    PROGMEM = "* ОНОВЛЕННЯ *";
const char const_DlgNextion[]    PROGMEM = "* NEXTION *"; // Залишаємо Nextion без перекладу, бо це назва технології
const char const_getWeather[]    PROGMEM = ""; // Залишаємо порожнім, як і в оригіналі
const char  const_waitForSD[]    PROGMEM = "ІНДЕКС SD";

const char        apNameTxt[]    PROGMEM = "ІМ'Я AP";
const char        apPassTxt[]    PROGMEM = "ПАРОЛЬ";
const char       bootstrFmt[]    PROGMEM = "Спроба %s"; // Тут "bootstrFmt" може мати ширший контекст, "Спроба %s" - як загальне "Trying to..."
const char        apSettFmt[]    PROGMEM = "СТОРІНКА НАЛАШТУВАНЬ НА: HTTP://%s/";
#if EXT_WEATHER
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 відчувається як: %.1f\011C \007 тиск: %d мм \007 вологість: %s%% \007 вітер: %.1f м/с [%s]";
#else
const char       weatherFmt[]    PROGMEM = "%s, %.1f\011C \007 тиск: %d мм \007 вологість: %s%%";
#endif
const char     weatherUnits[]    PROGMEM = "metric";
const char      weatherLang[]    PROGMEM = "uk";       // Змінено на українську мову для OpenWeatherMap

#endif
