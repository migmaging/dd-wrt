// This file was automatically generated by localedef.

package gnu.java.locale;

import java.util.ListResourceBundle;

public class LocaleInformation_sq_AL extends ListResourceBundle
{
  static final String decimalSeparator = ",";
  static final String groupingSeparator = ".";
  static final String numberFormat = "#,##0.###";
  static final String percentFormat = "#,##0%";
  static final String[] weekdays = { null, "e diel ", "e h\u00EBn\u00EB ", "e mart\u00EB ", "e m\u00EBrkur\u00EB ", "e enjte ", "e premte ", "e shtun\u00EB " };

  static final String[] shortWeekdays = { null, "Die ", "H\u00EBn ", "Mar ", "M\u00EBr ", "Enj ", "Pre ", "Sht " };

  static final String[] shortMonths = { "Jan", "Shk", "Mar", "Pri", "Maj", "Qer", "Kor", "Gsh", "Sht", "Tet", "N\u00EBn", "Dhj", null };

  static final String[] months = { "janar", "shkurt", "mars", "prill", "maj", "qershor", "korrik", "gusht", "shtator", "tetor", "n\u00EBntor", "dhjetor", null };

  static final String[] ampms = { "PD", "MD" };

  static final String shortDateFormat = "yyyy-MMM-dd";
  static final String defaultTimeFormat = "hh.m.s.a z";
  static final String currencySymbol = "Lek";
  static final String intlCurrencySymbol = "ALL";
  static final String currencyFormat = "$#,##0.000;-$#,##0.000";

  private static final Object[][] contents =
  {
    { "weekdays", weekdays },
    { "shortWeekdays", shortWeekdays },
    { "shortMonths", shortMonths },
    { "months", months },
    { "ampms", ampms },
    { "shortDateFormat", shortDateFormat },
    { "defaultTimeFormat", defaultTimeFormat },
    { "currencySymbol", currencySymbol },
    { "intlCurrencySymbol", intlCurrencySymbol },
    { "currencyFormat", currencyFormat },
    { "decimalSeparator", decimalSeparator },
    { "groupingSeparator", groupingSeparator },
    { "numberFormat", numberFormat },
    { "percentFormat", percentFormat },
  };

  public Object[][] getContents () { return contents; }
}
