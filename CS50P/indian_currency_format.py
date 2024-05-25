from babel.numbers import format_currency
print(format_currency(123456789, 'INR', locale='en_IN').replace(u'\xa0', u' '))