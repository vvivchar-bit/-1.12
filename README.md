# Практичне заняття №12

## Тема

Оброблення виняткових ситуацій. Патерни Facade, Adapter, Dependency Injection, Bridge.

## Виконав

Вівчар Вадим Вікторович  
Група: АЛК-43

---

## Мета роботи

Ознайомитися з принципами оброблення виняткових ситуацій у C++, розглянути структурні та архітектурні патерни Facade, Adapter, Dependency Injection і Bridge, а також навчитися застосовувати їх на практичних прикладах.

---

## Звіт

- [PDF-звіт: Практичне заняття №12](Практичне_заняття_12_Facade_Adapter_DI_Bridge.pdf)

---

## Файли з кодом

| № | Файл | Патерн | Опис |
|---|---|---|---|
| 1 | [ConsoleApplication1.cpp](ConsoleApplication1.cpp) | Facade | Спрощений інтерфейс для оброблення замовлення |
| 2 | [ConsoleApplication2.cpp](ConsoleApplication2.cpp) | Adapter | Адаптація старого принтера до нового інтерфейсу |
| 3 | [ConsoleApplication3.cpp](ConsoleApplication3.cpp) | Dependency Injection | Передавання залежності логера через конструктор |
| 4 | [ConsoleApplication4.cpp](ConsoleApplication4.cpp) | Bridge | Відокремлення абстракції фігури від реалізації кольору |

---

## Проєктні файли Visual Studio

### ConsoleApplication1

- [ConsoleApplication1.vcxproj](ConsoleApplication1.vcxproj)
- [ConsoleApplication1.vcxproj.filters](ConsoleApplication1.vcxproj.filters)
- [ConsoleApplication1.vcxproj.user](ConsoleApplication1.vcxproj.user)

### ConsoleApplication2

- [ConsoleApplication2.vcxproj](ConsoleApplication2.vcxproj)
- [ConsoleApplication2.vcxproj.filters](ConsoleApplication2.vcxproj.filters)
- [ConsoleApplication2.vcxproj.user](ConsoleApplication2.vcxproj.user)

### ConsoleApplication3

- [ConsoleApplication3.vcxproj](ConsoleApplication3.vcxproj)
- [ConsoleApplication3.vcxproj.filters](ConsoleApplication3.vcxproj.filters)
- [ConsoleApplication3.vcxproj.user](ConsoleApplication3.vcxproj.user)

### ConsoleApplication4

- [ConsoleApplication4.vcxproj](ConsoleApplication4.vcxproj)
- [ConsoleApplication4.vcxproj.filters](ConsoleApplication4.vcxproj.filters)
- [ConsoleApplication4.vcxproj.user](ConsoleApplication4.vcxproj.user)

---

## Короткий опис виконання

У практичному занятті розглянуто чотири патерни проєктування: Facade, Adapter, Dependency Injection та Bridge.

У першому прикладі реалізовано патерн Facade. Клас-фасад приховує складну логіку оброблення замовлення: перевірку товару, оплату, доставку та надсилання повідомлення.

У другому прикладі реалізовано патерн Adapter. Адаптер дозволяє використовувати старий клас принтера через новий інтерфейс, який очікує клієнтський код.

У третьому прикладі реалізовано Dependency Injection. Сервіс створення звіту не створює логер самостійно, а отримує його як зовнішню залежність через конструктор.

У четвертому прикладі реалізовано патерн Bridge. Абстракція фігури відокремлена від реалізації кольору, тому фігури й кольори можна змінювати незалежно.

---

## Використані приклади

1. Оброблення замовлення через фасад.
2. Адаптація старого інтерфейсу до нового.
3. Впровадження залежності через конструктор.
4. Відокремлення фігури від кольору за допомогою патерну Bridge.

---

## Висновок

У ході виконання практичного заняття було розглянуто патерни Facade, Adapter, Dependency Injection та Bridge. Практичні приклади показали, що ці патерни допомагають зменшити складність програмної системи, приховати внутрішні деталі реалізації, поєднувати несумісні інтерфейси, зменшити залежність класів один від одного і розділити абстракцію та реалізацію.

Також було показано, що ці патерни можуть поєднуватися з обробленням виняткових ситуацій, оскільки дозволяють централізовано перевіряти дані, обробляти помилки та робити програму гнучкішою для подальшого розвитку.
