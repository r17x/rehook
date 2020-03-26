# `ReactNativeModalWeb` (`ReasonReact` only)

> Reason / BuckleScript bindings for
> [modal-enhanced-react-native-web](https://github.com/Dekoruma/react-native-web-modal/tree/master/packages/modal-enhanced-react-native-web)
> (alternative version of
> [react-native-modal](https://github.com/react-native-community/react-native-modal)
> with support for web).

- [Installation](#installation)
- [Usage](#usage)
- [Changelog](#changelog)
- [Contribution](#contribution)
- [License](#license)
- [Alternative](#alternative)

## Installation

```
yarn add @ri7nz/bs-react-native-modal-web
```

> Note: This is project for `reason-react@>=0.7.0`.

Adjust your `bsconfig.json` by adding this package:

```json
"bs-dependencies": [
    "reason-react",
    "@ri7nz/bs-react-native-modal-web"
]
```

## Usage

```jsx
open ReactNativeModalWeb;

[@react.component]
let make = () =>
    <Modal
        animationIn=`fadeIn // optional
        isVisible=true
        onModalShow={_ =>
            "What can i do when i show?"->Js.log;
        }
    >
        <MychildrenComponentButReasonable/>
    </Modal>
```

## Changelog

- Read [Changelog](https://github.com/ri7nz/rehook/blob/master/packages/bs-react-native-modal-web/CHANGELOG.md).

## Contribution

> Feel Free for contribution on this project.

## License

[MIT](https://ri7nz.mit-license.org/)

## Alternative

- (Special Thanks) [modal-enhanced-react-native-web](https://github.com/Dekoruma/react-native-web-modal/tree/master/packages/modal-enhanced-react-native-web)
- [react-native-modal](https://github.com/react-native-community/react-native-modal)
